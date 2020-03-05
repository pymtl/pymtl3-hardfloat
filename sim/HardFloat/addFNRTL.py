#=========================================================================
# Addition/subtraction module for PyMTL3-Hardfloat IP
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.connects import connect_pairs

# =========== Importing converters and adder modules ============
from HardFloat.recFNToFNRTL import recFNToFN
from HardFloat.fNToRecFNRTL import fNToRecFN
from HardFloat.addRecFNRTL import addRecFN
# ===============================================================

from pymtl3.passes.backends.verilog import \
    VerilogPlaceholderConfigs, VerilatorImportConfigs, TranslationConfigs

class addFN( Component ):

  # Constructor

  def construct( s, expWidth = 5, sigWidth = 11 ):
    
    # Declaring input and output ports
    s.subOp          = InPort ( Bits1 )
    s.a              = InPort ( mk_bits(expWidth + sigWidth) )
    s.b              = InPort ( mk_bits(expWidth + sigWidth) )
    s.roundingMode   = InPort ( Bits3 ) 
    
    s.out            = OutPort ( mk_bits(expWidth + sigWidth) )
    
    # Declaring wires 
    s.convA          = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.convB          = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.adderOut       = Wire( mk_bits(expWidth + sigWidth + 1) )
    s.exceptionFlags = Wire( Bits5 )
    
    # Instantiating converters and adder modules
    s.stdToRecConvA  = fNToRecFN( expWidth = expWidth, sigWidth = sigWidth )
    s.stdToRecConvB  = fNToRecFN( expWidth = expWidth, sigWidth = sigWidth )
    
    s.recToStdConv   = recFNToFN( expWidth = expWidth, sigWidth = sigWidth )
    
    s.adder          = addRecFN ( expWidth = expWidth, sigWidth = sigWidth )
    
    # Connecting all the logic together
    connect( s.a, s.stdToRecConvA.in_ )
    connect( s.stdToRecConvA.out, s.convA )
    
    connect( s.b, s.stdToRecConvB.in_ )
    connect( s.stdToRecConvB.out, s.convB )
    
    connect( b1(1), s.adder.control ) # control = 1 (slightly better)
    connect( s.convA, s.adder.a )
    connect( s.convB, s.adder.b )
    connect( s.roundingMode, s.adder.roundingMode )
    connect( s.subOp, s.adder.subOp )
    
    connect( s.adder.out, s.adderOut )
    connect( s.adder.exceptionFlags, s.exceptionFlags)
    
    connect( s.adderOut, s.recToStdConv.in_ )
    connect( s.recToStdConv.out, s.out ) # connecting the output
    
  # Line tracing
  def line_trace( s ):
    return f"{s.out}"
    
        
