#=========================================================================
# Multiplication module for PyMTL3-Hardfloat IP
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.connects import connect_pairs

# =========== Importing converters and multiplier modules ============
from HardFloat.RecFNToFNRTL import RecFNToFN
from HardFloat.FNToRecFNRTL import FNToRecFN
from HardFloat.MulRecFNRTL import MulRecFN
# ===============================================================

class MulFN( Component ):

  # Constructor

  def construct( s, expWidth = 5, sigWidth = 11 ):

    # Declaring input and output ports
    s.a              = InPort ( expWidth + sigWidth )
    s.b              = InPort ( expWidth + sigWidth )
    s.roundingMode   = InPort ( 3 )

    s.out            = OutPort ( expWidth + sigWidth )

    # Declaring wires
    s.conv_a          = Wire( expWidth + sigWidth + 1 )
    s.conv_b          = Wire( expWidth + sigWidth + 1 )
    s.multiplier_out  = Wire( expWidth + sigWidth + 1 )
    s.exception_flags = Wire( 5 )

    # Instantiating converters and multiplier modules
    s.std_to_rec_conv_a  = FNToRecFN( expWidth, sigWidth )
    s.std_to_rec_conv_b  = FNToRecFN( expWidth, sigWidth )

    s.rec_to_std_conv    = RecFNToFN( expWidth, sigWidth )

    s.multiplier         = MulRecFN ( expWidth, sigWidth )

    # Connecting all the logic together
    connect( s.a, s.std_to_rec_conv_a.in_ )
    connect( s.std_to_rec_conv_a.out, s.conv_a )

    connect( s.b, s.std_to_rec_conv_b.in_ )
    connect( s.std_to_rec_conv_b.out, s.conv_b )

    connect( b1(1), s.multiplier.control ) # control = 1 (slightly better)
    connect( s.conv_a, s.multiplier.a )
    connect( s.conv_b, s.multiplier.b )
    connect( s.roundingMode, s.multiplier.roundingMode )

    connect( s.multiplier.out, s.multiplier_out )
    connect( s.multiplier.exceptionFlags, s.exception_flags)

    connect( s.multiplier_out, s.rec_to_std_conv.in_ )
    connect( s.rec_to_std_conv.out, s.out ) # connecting the output

  # Line tracing
  def line_trace( s ):
    return f"a = {bin(s.a)}, b = {bin(s.b)} out = {bin(s.out)}"


