#=========================================================================
# mulRecFNRTL_test.py
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from HardFloat.mulRecFNRTL import mulRecFNRTL 
 

def test_simple( dump_vcd, test_verilog ):
  expWidth = 8
  sigWidth = 8
  run_test_vector_sim( mulRecFNRTL(expWidth = expWidth, sigWidth = sigWidth), [
    ('a  b  roundingMode  out*  exceptionFlags*'), 
	[ mk_bits(expWidth + sigWidth + 1)(0), mk_bits(expWidth + sigWidth + 1)(0), \
		b3(0), mk_bits(expWidth + sigWidth + 1)(0), '?'],  
  ], dump_vcd, test_verilog )
  

