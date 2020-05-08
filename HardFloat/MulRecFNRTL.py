#=========================================================================
# Wrapper for HardFloat's multiplication module
#=========================================================================

from pymtl3 import *
from pymtl3.passes.backends.verilog.VerilogPlaceholderPass import VerilogPlaceholderPass

class MulRecFN( Placeholder, Component ):

  # Constructor

  def construct( s, expWidth=5, sigWidth=11 ):

    # Interface

    s.control        = InPort ()
    s.a              = InPort ( expWidth + sigWidth + 1 )
    s.b              = InPort ( expWidth + sigWidth + 1 )
    s.roundingMode   = InPort ( 3 )

    s.out            = OutPort ( expWidth + sigWidth + 1 )
    s.exceptionFlags = OutPort ( 5 )

    # Configurations

    from os import path
    srcdir = path.dirname(__file__) + path.sep + 'source' + path.sep

    s.set_metadata( VerilogPlaceholderPass.src_file, srcdir + 'mulRecFN.v' )
    s.set_metadata( VerilogPlaceholderPass.top_module, 'mulRecFN' )
    s.set_metadata( VerilogPlaceholderPass.v_include, [ srcdir ] )
    s.set_metadata( VerilogPlaceholderPass.v_libs, [
      srcdir + 'HardFloat_primitives.v',
      srcdir + 'isSigNaNRecFN.v',
      srcdir + 'HardFloat_rawFN.v',
    ])
    s.set_metadata( VerilogPlaceholderPass.has_clk, False )
    s.set_metadata( VerilogPlaceholderPass.has_reset, False )

    s.set_metadata( VerilatorImportPass.vl_Wno_list, ['WIDTH'] )
