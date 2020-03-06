#=========================================================================
# Unit testing for addRecFN PyMTL wrapper module 
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from HardFloat.addRecFNRTL import addRecFN 

round_near_even   = 0b000
round_minMag      = 0b001
round_min         = 0b010
round_max         = 0b011
round_near_maxMag = 0b100
round_odd         = 0b110
 
def test_addRecF16_zero( dump_vcd, test_verilog ):
  expWidth = 5
  sigWidth = 11
  run_test_vector_sim( addRecFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp	 a  b  roundingMode  out*  exceptionFlags*'), 
		[ b1(0), mk_bits(expWidth + sigWidth + 1)(0), mk_bits(expWidth + sigWidth + 1)(0), \
		b3(round_near_even), mk_bits(expWidth + sigWidth + 1)(0), '?'],  
  ], dump_vcd, test_verilog )
