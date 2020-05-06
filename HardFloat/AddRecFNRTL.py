#=========================================================================
# Wrapper for HardFloat's addition and subtraction module
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import \
    VerilogPlaceholderConfigs, VerilatorImportConfigs, TranslationConfigs

class AddRecFN( Placeholder, Component ):

  # Constructor

  def construct( s, expWidth = 5, sigWidth = 11 ):

    # Interface
	
    s.control        = InPort ()
    s.subOp          = InPort ()
    s.a              = InPort ( mk_bits(expWidth + sigWidth + 1) )
    s.b              = InPort ( mk_bits(expWidth + sigWidth + 1) )
    s.roundingMode   = InPort ( Bits3 ) 
    
    s.out            = OutPort ( mk_bits(expWidth + sigWidth + 1) )
    s.exceptionFlags = OutPort ( Bits5 )

    # Configurations

    from os import path
    s.config_placeholder = VerilogPlaceholderConfigs(
      src_file   = path.dirname(__file__) + '/source/addRecFN.v',
      top_module = 'addRecFN',
      v_include  = [ path.dirname(__file__) + '/source' ],
      has_clk    = False,
      has_reset  = False,
    )

    s.verilog_translate_import = True
