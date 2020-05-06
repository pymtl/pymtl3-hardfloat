#=========================================================================
# Wrapper for HardFloat's format conversion (from recorded to standard) module
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import \
    VerilogPlaceholderConfigs, VerilatorImportConfigs, TranslationConfigs

class RecFNToFN( Placeholder, Component ):

  # Constructor

  def construct( s, expWidth = 5, sigWidth = 11 ):

    # Interface

    s.in_            = InPort ( mk_bits(expWidth + sigWidth + 1) )
    
    s.out            = OutPort ( mk_bits(expWidth + sigWidth) )

    # Configurations

    from os import path
    s.config_placeholder = VerilogPlaceholderConfigs(
      src_file   = path.dirname(__file__) + '/source/recFNToFN.v',
      top_module = 'recFNToFN',
      v_include  = [ path.dirname(__file__) + '/source' ],
      has_clk    = False,
      has_reset  = False,
    )

    s.verilog_translate_import = True
