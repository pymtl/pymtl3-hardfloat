#=========================================================================
# Unit testing for fNToRecFNRTL PyMTL wrapper module 
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from HardFloat.fNToRecFNRTL import fNToRecFN
 
def test_f16ToRecF17_zero( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  in_ = 0b0000010000000001
  out = 0b00100100000000001
  
  run_test_vector_sim( fNToRecFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('in_                                out*'), 
		[ mk_bits(expWidth + sigWidth)(in_), mk_bits(expWidth + sigWidth + 1)(out)],  
  ], dump_vcd, test_verilog )


