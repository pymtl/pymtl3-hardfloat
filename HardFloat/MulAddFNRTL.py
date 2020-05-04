#=========================================================================
# Multiplication module for PyMTL3-Hardfloat IP
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.connects import connect_pairs

# =========== Importing converters and multiplier modules ============
from .RecFNToFNRTL import RecFNToFN
from .FNToRecFNRTL import FNToRecFN
from .MulAddRecFNRTL import MulAddRecFN
# ===============================================================

class MulAddFN( Component ):

  # Constructor

  def construct( s, expWidth = 5, sigWidth = 11 ):

    # Declaring input and output ports
    s.op             = InPort ( Bits2 )
    s.a              = InPort ( mk_bits(expWidth + sigWidth) )
    s.b              = InPort ( mk_bits(expWidth + sigWidth) )
    s.c              = InPort ( mk_bits(expWidth + sigWidth) )
    s.roundingMode   = InPort ( Bits3 )

    s.out            = OutPort ( mk_bits(expWidth + sigWidth) )

    # Declaring wires
    s.conv_a          = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.conv_b          = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.conv_c          = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.add_mul_out     = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.exception_flags = Wire( Bits5 )

    # Instantiating converters and multiplier modules
    s.std_to_rec_conv_a  = FNToRecFN( expWidth = expWidth, sigWidth = sigWidth )
    s.std_to_rec_conv_b  = FNToRecFN( expWidth = expWidth, sigWidth = sigWidth )
    s.std_to_rec_conv_c  = FNToRecFN( expWidth = expWidth, sigWidth = sigWidth )

    s.rec_to_std_conv    = RecFNToFN( expWidth = expWidth, sigWidth = sigWidth )

    s.adder_multiplier   = MulAddRecFN ( expWidth = expWidth, sigWidth = sigWidth )

    # Connecting all the logic together
    connect( s.a, s.std_to_rec_conv_a.in_ )
    connect( s.std_to_rec_conv_a.out, s.conv_a )

    connect( s.b, s.std_to_rec_conv_b.in_ )
    connect( s.std_to_rec_conv_b.out, s.conv_b )

    connect( s.c, s.std_to_rec_conv_c.in_ )
    connect( s.std_to_rec_conv_c.out, s.conv_c )

    connect( b1(1), s.adder_multiplier.control ) # control = 1 (slightly better)
    connect( s.op, s.adder_multiplier.op )
    connect( s.conv_a, s.adder_multiplier.a )
    connect( s.conv_b, s.adder_multiplier.b )
    connect( s.conv_c, s.adder_multiplier.c )
    connect( s.roundingMode, s.adder_multiplier.roundingMode )

    connect( s.adder_multiplier.out, s.add_mul_out )
    connect( s.adder_multiplier.exceptionFlags, s.exception_flags)

    connect( s.add_mul_out, s.rec_to_std_conv.in_ )
    connect( s.rec_to_std_conv.out, s.out ) # connecting the output

  # Line tracing
  def line_trace( s ):
    return f"a = {bin(s.a)}, b = {bin(s.b)}, c = {bin(s.c)} out = {bin(s.out)}"


