#=========================================================================
# Wrapper for HardFloat's format conversion (from standard to recoded) module
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog import *

class FNToRecFN( VerilogPlaceholder, Component ):

  # Constructor

  def construct( s, expWidth=5, sigWidth=11 ):

    # Interface

    s.in_ = InPort ( expWidth+sigWidth )

    s.out = OutPort( expWidth+sigWidth+1 )

    # Configurations

    from os import path
    srcdir = path.dirname(__file__) + path.sep + 'source' + path.sep

    s.set_metadata( VerilogPlaceholderPass.src_file, srcdir + 'fNToRecFN.v' )
    s.set_metadata( VerilogPlaceholderPass.top_module, 'fNToRecFN' )
    s.set_metadata( VerilogPlaceholderPass.v_include, [ srcdir ] )
    s.set_metadata( VerilogPlaceholderPass.v_libs, [
      srcdir + 'HardFloat_primitives.v',
      srcdir + 'isSigNaNRecFN.v',
      srcdir + 'HardFloat_rawFN.v',
    ])
    s.set_metadata( VerilogPlaceholderPass.has_clk, False )
    s.set_metadata( VerilogPlaceholderPass.has_reset, False )

    s.set_metadata( VerilogVerilatorImportPass.vl_Wno_list, ['WIDTH'] )
