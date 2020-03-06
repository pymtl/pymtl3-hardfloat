#=========================================================================
# Unit testing for recFNToFNRTL PyMTL wrapper module 
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from HardFloat.recFNToFNRTL import recFNToFN
 
def test_recF17ToF16_zero( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  in_ = 0b00000100000000001
  out = 0b0000000000000000
  
  run_test_vector_sim( recFNToFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('in_                                out*'), 
		[ mk_bits(expWidth + sigWidth)(in_), mk_bits(expWidth + sigWidth + 1)(out)],  
  ], dump_vcd, test_verilog )


