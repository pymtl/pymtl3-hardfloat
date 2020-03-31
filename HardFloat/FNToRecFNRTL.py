#=========================================================================
# Wrapper for HardFloat's format conversion (from standard to recoded) module
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import \
    VerilogPlaceholderConfigs, VerilatorImportConfigs, TranslationConfigs

class FNToRecFN( Placeholder, Component ):

  # Constructor

  def construct( s, expWidth = 5, sigWidth = 11 ):

    # Interface

    s.in_            = InPort ( mk_bits(expWidth + sigWidth) )
    
    s.out            = OutPort ( mk_bits(expWidth + sigWidth + 1) )

    # Configurations

    from os import path
    s.config_placeholder = VerilogPlaceholderConfigs(
      src_file   = path.dirname(__file__) + '/source/fNToRecFN.v',
      #v_include  = [path.dirname(__file__) + '/source'],
      top_module = 'fNToRecFN',
      has_clk    = False,
      has_reset  = False,
    )

    s.config_verilog_import = VerilatorImportConfigs(
      vl_Wno_list = ['WIDTH'], # to surpress some Verilator warnings
    )

    s.verilog_translate_import = True
