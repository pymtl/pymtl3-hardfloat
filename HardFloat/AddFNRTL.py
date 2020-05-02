#=========================================================================
# Addition/subtraction module for PyMTL3-Hardfloat IP
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.connects import connect_pairs

# =========== Importing converters and adder modules ============
from HardFloat.RecFNToFNRTL import RecFNToFN
from HardFloat.FNToRecFNRTL import FNToRecFN
from HardFloat.AddRecFNRTL import AddRecFN
# ===============================================================

class AddFN( Component ):

  # Constructor

  def construct( s, expWidth = 5, sigWidth = 11 ):

    # Declaring input and output ports
    s.subOp          = InPort ( Bits1 )
    s.a              = InPort ( mk_bits(expWidth + sigWidth) )
    s.b              = InPort ( mk_bits(expWidth + sigWidth) )
    s.roundingMode   = InPort ( Bits3 )

    s.out            = OutPort ( mk_bits(expWidth + sigWidth) )

    # Declaring wires
    s.conv_a          = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.conv_b          = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.adder_out       = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.exception_flags = Wire( Bits5 )

    # Instantiating converters and adder modules
    s.std_to_rec_conv_a  = FNToRecFN( expWidth = expWidth, sigWidth = sigWidth )
    s.std_to_rec_conv_b  = FNToRecFN( expWidth = expWidth, sigWidth = sigWidth )

    s.rec_to_std_conv    = RecFNToFN( expWidth = expWidth, sigWidth = sigWidth )

    s.adder              = AddRecFN ( expWidth = expWidth, sigWidth = sigWidth )

    # Connecting all the logic together
    connect( s.a, s.std_to_rec_conv_a.in_ )
    connect( s.std_to_rec_conv_a.out, s.conv_a )

    connect( s.b, s.std_to_rec_conv_b.in_ )
    connect( s.std_to_rec_conv_b.out, s.conv_b )

    connect( b1(1), s.adder.control ) # control = 1 (slightly better)
    connect( s.conv_a, s.adder.a )
    connect( s.conv_b, s.adder.b )
    connect( s.roundingMode, s.adder.roundingMode )
    connect( s.subOp, s.adder.subOp )

    connect( s.adder.out, s.adder_out )
    connect( s.adder.exceptionFlags, s.exception_flags)

    connect( s.adder_out, s.rec_to_std_conv.in_ )
    connect( s.rec_to_std_conv.out, s.out ) # connecting the output

  # Line tracing
  def line_trace( s ):
    return f"a = {bin(s.a)}, b = {bin(s.b)} out = {bin(s.out)}"


