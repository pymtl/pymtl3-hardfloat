#=========================================================================
# IntMulNstageStepRTL_test
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from HardFloat.addRecFNRTL import addRecFNRTL 
 

def test_simple( dump_vcd, test_verilog ):
  expWidth = 3
  sigWidth = 3
  run_test_vector_sim( addRecFNRTL(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp	 a  b  roundingMode  out*  exceptionFlags*'), 
		[ b1(0), mk_bits(expWidth + sigWidth + 1)(0), mk_bits(expWidth + sigWidth + 1)(0), \
		b3(0), mk_bits(expWidth + sigWidth + 1)(0), '?'],  
  ], dump_vcd, test_verilog )
  

