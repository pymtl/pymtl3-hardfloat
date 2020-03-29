#=========================================================================
# Unit testing for mulFNRTL PyMTL wrapper module 
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from pymtl3.stdlib.test import TestVectorSimulator
from pymtl3.passes.backends.verilog import VerilogPlaceholderPass

import hypothesis
from hypothesis import given
from hypothesis import strategies as st
from hypothesis import settings

from HardFloat.MulAddFNRTL import MulAddFN 
from HardFloat.converter_funcs import floatToFN, fNToFloat

import random

# =================== Format of floating point number ====================
# bin('0b' + '0' + '00000' + '0000000000')
#      bin   sign   expon     significand
# ========================================================================

# =========================== Helper functions ===========================
def mul_add_op( a, b, c, op ):
  if op == 0:
    return (a*b) + c
  elif op == 1:
    return (a*b) - c
  elif op == 2:
    return c - (a*b)
  else:
    return -(a*b) - c
    
def abs_val( x ):
  if(x < 0):
    return -x
  else:
    return x

def get_rand( low, high, precision ):
  val = round(random.uniform(low, high), precision)
    
  return val
# ========================================================================

#-------------------------------------------------------------------------
# TestVectorSimulator test
#-------------------------------------------------------------------------
def run_tv_test( dut, test_vectors, precision, tolerance ):

  # Define input/output functions
  def tv_in( dut, tv ):
    dut.op           = tv[0]
    dut.a            = tv[1]
    dut.b            = tv[2]
    dut.c            = tv[3]
    dut.roundingMode = tv[4]

  def tv_out( dut, tv ):
    test_out = fNToFloat(tv[5], precision)
    actual_out = fNToFloat(dut.out, precision)
    
    assert (abs_val(test_out - actual_out) < tolerance) 

  # Run the test
  dut.elaborate()
  dut.verilog_translate_import = True
  dut.apply( VerilogPlaceholderPass() )
  dut = TranslationImportPass()( dut )
  
  sim = TestVectorSimulator( dut, test_vectors, tv_in, tv_out )
  sim.run_test()

# ======================================================================== 

B1  = mk_bits(1)
B2  = mk_bits(2)
B3  = mk_bits(3)
  
# ====================== Tests for half-precision ========================
def test_mulAddF16_ones():
  
  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = 1.0
    b = 1.0
    c = 1.0
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_mulAddF16_positive():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  BN  = mk_bits(expWidth + sigWidth)
    
  test_vector = []
  
  for op in range(4):
    a = 19.49
    b = 49.04
    c = 7.0004
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_mulAddF16_mixed():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = 12.49
    b = -29.04
    c = 17.04
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_mulAddF16_negative():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = -32.1
    b = -9.768
    c = -3.040
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

# ==========================================================================
  
# ====================== Tests for single-precision ========================
def test_mulAddF32_ones():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.00001

  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = 1.0
    b = 1.0
    c = 1.0
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_mulAddF32_positive():
  
  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.00001
  
  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = 1923.01
    b = 391.051
    c = 32.301
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_mulAddF32_mixed():
  
  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.00001

  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = -0.501
    b = -591.1
    c = 1041.92
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_mulAddF32_negative():
  
  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.00001
  
  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = -102.501
    b = -51.1112
    c = -0.019
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

# ========================================================================

# ====================== Tests for double-precision ======================
def test_mulAddF64_ones():
  
  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = 1.0
    b = 1.0
    c = 1.0
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_mulAddF64_positive():
  
  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.00001

  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = 19284.0122
    b = 1292131.012
    c = 549999.01
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_mulAddF64_mixed():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.00001

  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = 0.0004781
    b = -1892.0192
    c = -1284.129001
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_mulAddF64_negative():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.00001

  BN  = mk_bits(expWidth + sigWidth)
  
  test_vector = []
  
  for op in range(4):
    a = -192.40012
    b = -0.00005712
    c = -34
    out = mul_add_op(a, b, c, op)
    
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    c = floatToFN(c, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

# ========================================================================
  
# ================= Random testing for single-precision ==================

def test_mulAddF32_random():

  expWidth = 8
  sigWidth = 23
  precision = expWidth + sigWidth
  tolerance = 0.0001

  BN  = mk_bits(expWidth + sigWidth)

  random.seed(a=None) # uses current system time for seed
  
  test_vector = []
  
  for test in range(1000):
    
    a = get_rand(-1000.0, 1000.0, 10)
    b = get_rand(-1000.0, 1000.0, 10)
    c = get_rand(-1000.0, 1000.0, 10)
    
    for op in range(4):
      out = mul_add_op(a, b, c, op)
      
      a = floatToFN(a, precision)
      b = floatToFN(b, precision)
      c = floatToFN(c, precision)
      out = floatToFN(out, precision)
      
      test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

# ========================================================================

# ================= Random testing for double-precision ==================
def test_mulAddF64_random():
  
  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.0001

  BN  = mk_bits(expWidth + sigWidth)

  random.seed(a=None) # uses current system time for seed

  test_vector = []
  
  for test in range(1000):
    a = get_rand(-100000.0, 100000.0, 10)
    b = get_rand(-100000.0, 100000.0, 10)
    c = get_rand(-100000.0, 100000.0, 10)
        
    for op in range(1):
      out = mul_add_op(a, b, c, op)
    
      a = floatToFN(a, precision)
      b = floatToFN(b, precision)
      c = floatToFN(c, precision)
      out = floatToFN(out, precision)
      
      test_vector.append([B2(op), BN(a), BN(b), BN(c), B3(0), BN(out)])
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)
# ========================================================================

# ================ Double-precision hypothesis testing ===================
@given( a = st.floats(min_value=-7e-120, max_value=7e+120),
        b = st.floats(min_value=-7e-120, max_value=7e+120),
        c = st.floats(min_value=-7e-120, max_value=7e+120))
@settings(deadline = None)
def test_hypothesis_mulAddF64( a, b, c ):
  
  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.0000001
  
  BN  = mk_bits(expWidth + sigWidth)

  out = a * b + c
  
  op = 0 # fixed at this mode
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  c = floatToFN(c, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulAddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  op      a         b        c         roundingMode   out*'),
    [  B2(op), BN(a),    BN(b),   BN(c),    B3(0),         BN(out), ],
  ],  precision, tolerance)

# ========================================================================


