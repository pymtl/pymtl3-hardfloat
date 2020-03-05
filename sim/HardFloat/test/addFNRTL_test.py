#=========================================================================
# Unit testing for addFNRTL PyMTL wrapper module 
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from HardFloat.addFNRTL import addFN 

round_near_even   = 0b000
round_minMag      = 0b001
round_min         = 0b010
round_max         = 0b011
round_near_maxMag = 0b100
round_odd         = 0b110
    
def test_addF16_zero( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  a   = 0b0000000000000000
  b   = 0b0000000000000000
  out = 0b0000000000000000
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(0), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b5(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )


