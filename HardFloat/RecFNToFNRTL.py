#=========================================================================
# Wrapper for HardFloat's format conversion (from recorded to standard) module
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog.VerilogPlaceholderPass import VerilogPlaceholderPass

class RecFNToFN( Placeholder, Component ):

  # Constructor

  def construct( s, expWidth=5, sigWidth=11 ):

    # Interface

    s.in_ = InPort ( expWidth + sigWidth + 1 )

    s.out = OutPort( expWidth + sigWidth )

    # Configurations

    from os import path
    srcdir = path.dirname(__file__) + path.sep + 'source' + path.sep

    s.set_metadata( VerilogPlaceholderPass.src_file, srcdir + 'recFNToFN.v' )
    s.set_metadata( VerilogPlaceholderPass.top_module, 'recFNToFN' )
    s.set_metadata( VerilogPlaceholderPass.v_include, [ srcdir ] )
    s.set_metadata( VerilogPlaceholderPass.v_libs, [
      srcdir + 'HardFloat_primitives.v',
      srcdir + 'isSigNaNRecFN.v',
      srcdir + 'HardFloat_rawFN.v',
      srcdir + 'recFNToRecFN.v',
      srcdir + 'HardFloat_specialize.vi',
    ])
    s.set_metadata( VerilogPlaceholderPass.has_clk, False )
    s.set_metadata( VerilogPlaceholderPass.has_reset, False )

    s.set_metadata( VerilatorImportPass.vl_Wno_list, ['WIDTH'] )


