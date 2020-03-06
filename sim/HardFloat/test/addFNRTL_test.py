#=========================================================================
# Unit testing for addFNRTL PyMTL wrapper module 
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from HardFloat.addFNRTL import addFN 
from converterFuncs import floatToStd, stdToFloat

round_near_even   = 0b000
round_minMag      = 0b001
round_min         = 0b010
round_max         = 0b011
round_near_maxMag = 0b100
round_odd         = 0b110

# =================== Format of floating point number ===============
# bin('0b' + '0' + '00000' + '0000000000')
#      bin   sign   expon     significand
# ===================================================================

# =================== Useful functions for formatting ================
get_bin = lambda x, n: format(x, 'b').zfill(n)
# ====================================================================
def test_addF16_zero( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  a   = int('0b' + '0' + '00000' + '0000000000', 2)
  b   = int('0b' + '0' + '00000' + '0000000000', 2)
  out = int('0b' + '0' + '00000' + '0000000000', 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(0), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_addF16_positive_positive( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  a = 12.98
  b = 89.73
  out = a + b
  
  a = int(('0b' + floatToStd(a, 16)), 2)
  b = int(('0b' + floatToStd(b, 16)), 2)
  out = int(('0b' + floatToStd(out, 16)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(0), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_addF16_positive_negative( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  a = 26.5921
  b = -19.02
  out = a + b
  
  a = int(('0b' + floatToStd(a, 16)), 2)
  b = int(('0b' + floatToStd(b, 16)), 2)
  out = int(('0b' + floatToStd(out, 16)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(0), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_addF16_negative_negative( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  a = -95.184
  b = -5.30
  out = a + b
  
  a = int(('0b' + floatToStd(a, 16)), 2)
  b = int(('0b' + floatToStd(b, 16)), 2)
  out = int(('0b' + floatToStd(out, 16)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(0), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_subF16_zero( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  a   = int('0b' + '0' + '00000' + '0000000000', 2)
  b   = int('0b' + '0' + '00000' + '0000000000', 2)
  out = int('0b' + '0' + '00000' + '0000000000', 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(1), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_subF16_positive_positive( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  a = 26.67
  b = 5.482
  out = a - b
  
  a = int(('0b' + floatToStd(a, 16)), 2)
  b = int(('0b' + floatToStd(b, 16)), 2)
  out = int(('0b' + floatToStd(out, 16)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(1), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_subF16_positive_negative( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  a = 78.576
  b = -11.68
  out = a - b
  
  a = int(('0b' + floatToStd(a, 16)), 2)
  b = int(('0b' + floatToStd(b, 16)), 2)
  out = int(('0b' + floatToStd(out, 16)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(1), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_subF16_negative_negative( dump_vcd, test_verilog ):
  
  expWidth = 5
  sigWidth = 11
  
  a = -86.9
  b = -44.81
  out = a - b
  
  a = int(('0b' + floatToStd(a, 16)), 2)
  b = int(('0b' + floatToStd(b, 16)), 2)
  out = int(('0b' + floatToStd(out, 16)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(1), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )

def test_addF32_positive_positive( dump_vcd, test_verilog ):
  
  expWidth = 8
  sigWidth = 23
  
  a = 84.10
  b = 12.4111
  out = a + b
  
  a = int(('0b' + floatToStd(a, 32)), 2)
  b = int(('0b' + floatToStd(b, 32)), 2)
  out = int(('0b' + floatToStd(out, 32)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(0), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_addF32_positive_negative( dump_vcd, test_verilog ):
  
  expWidth = 8
  sigWidth = 23
  
  a = 596.193
  b = -1994.291
  out = a + b
  
  a = int(('0b' + floatToStd(a, 32)), 2)
  b = int(('0b' + floatToStd(b, 32)), 2)
  out = int(('0b' + floatToStd(out, 32)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(0), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_addF32_negative_negative( dump_vcd, test_verilog ):
  
  expWidth = 8
  sigWidth = 23
  
  a = -131.924
  b = -259.10
  out = a + b
  
  a = int(('0b' + floatToStd(a, 32)), 2)
  b = int(('0b' + floatToStd(b, 32)), 2)
  out = int(('0b' + floatToStd(out, 32)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(0), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_subF32_positive_positive( dump_vcd, test_verilog ):
  
  expWidth = 8
  sigWidth = 23
  
  a = 25.61
  b = 5.129
  out = a - b
  
  a = int(('0b' + floatToStd(a, 32)), 2)
  b = int(('0b' + floatToStd(b, 32)), 2)
  out = int(('0b' + floatToStd(out, 32)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(1), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_subF32_positive_negative( dump_vcd, test_verilog ):
  
  expWidth = 8
  sigWidth = 23
  
  a = 182.401
  b = -41.531
  out = a - b
  
  a = int(('0b' + floatToStd(a, 32)), 2)
  b = int(('0b' + floatToStd(b, 32)), 2)
  out = int(('0b' + floatToStd(out, 32)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(1), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )
  
def test_subF32_negative_negative( dump_vcd, test_verilog ):
  
  expWidth = 8
  sigWidth = 23
  
  a = -12.41
  b = -41.212
  out = a - b
  
  a = int(('0b' + floatToStd(a, 32)), 2)
  b = int(('0b' + floatToStd(b, 32)), 2)
  out = int(('0b' + floatToStd(out, 32)), 2)
  
  run_test_vector_sim( addFN(expWidth = expWidth, sigWidth = sigWidth), [
    ('subOp  a   b   roundingMode   out*'), 
		[ b1(1), mk_bits(expWidth + sigWidth)(a), mk_bits(expWidth + sigWidth)(b),  \
      b3(round_near_even), mk_bits(expWidth + sigWidth)(out) ]
  ], dump_vcd, test_verilog )


