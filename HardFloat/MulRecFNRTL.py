#=========================================================================
# Wrapper for HardFloat's multiplication module
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import \
    VerilogPlaceholderConfigs, VerilatorImportConfigs, TranslationConfigs

class MulRecFN( Placeholder, Component ):

  # Constructor

  def construct( s, expWidth = 5, sigWidth = 11 ):

    # Interface
	
    s.control        = InPort ()
    s.a              = InPort ( mk_bits(expWidth + sigWidth + 1) )
    s.b              = InPort ( mk_bits(expWidth + sigWidth + 1) )
    s.roundingMode   = InPort ( Bits3 ) 
    
    s.out            = OutPort ( mk_bits(expWidth + sigWidth + 1) )
    s.exceptionFlags = OutPort ( Bits5 )

    # Configurations

    from os import path
    s.config_placeholder = VerilogPlaceholderConfigs(
      src_file   = path.dirname(__file__) + '/source/mulRecFN.v',
      #v_include  = [path.dirname(__file__) + '/source/RISCV'],
      top_module = 'mulRecFN',
      has_clk    = False,
      has_reset  = False,
    )

    s.verilog_translate_import = True
