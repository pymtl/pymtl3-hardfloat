#=========================================================================
# Unit testing for AddFNRTL PyMTL wrapper module 
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from pymtl3.stdlib.test import TestVectorSimulator
from pymtl3.passes.backends.verilog import VerilogPlaceholderPass

import hypothesis
from hypothesis import given
from hypothesis import strategies as st
from hypothesis import settings

from HardFloat.AddFNRTL import AddFN 
from HardFloat.converter_funcs import floatToFN, fNToFloat

import random

# ========================================================================
round_near_even   = 0b000
round_minMag      = 0b001
round_min         = 0b010
round_max         = 0b011
round_near_maxMag = 0b100
round_odd         = 0b110

# =================== Format of floating point number ====================
# bin('0b' + '0' + '00000' + '0000000000')
#      bin   sign   expon     significand
# ========================================================================

# =========================== Helper functions ===========================
def abs_val( x ):
  if(x < 0):
    return -x
  else:
    return x

def get_rand( low, high, precision ):
  val = round(random.uniform(low, high), precision)
  while abs_val(val) < 1:
    val = round(random.uniform(low, high), precision)
    
  return val
# ========================================================================

#-------------------------------------------------------------------------
# TestVectorSimulator test
#-------------------------------------------------------------------------
def run_tv_test( dut, test_vectors, precision, tolerance ):

  # Define input/output functions
  def tv_in( dut, tv ):
    dut.subOp        = tv[0]
    dut.a            = tv[1]
    dut.b            = tv[2]
    dut.roundingMode = tv[3]

  def tv_out( dut, tv ):
    test_out = fNToFloat(tv[4], precision)
    actual_out = fNToFloat(dut.out, precision)
    
    assert (abs_val(test_out - actual_out) < tolerance) 

  # Run the test
  dut.elaborate()
  dut.verilog_translate_import = True
  dut.apply( VerilogPlaceholderPass() )
  dut = TranslationImportPass()( dut )
  
  sim = TestVectorSimulator( dut, test_vectors, tv_in, tv_out )
  sim.run_test()

# ====================== Tests for half-precision ========================
expWidth = 5
sigWidth = 11
precision = expWidth + sigWidth
tolerance = 0.001

B1  = mk_bits(1)
B3  = mk_bits(3)
BN  = mk_bits(expWidth + sigWidth)
  
def test_addF16_ones():
  
  a = 1.0
  b = 1.0
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_addF16_positive_positive():
  
  a = 17.61
  b = 51.41
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_addF16_positive_negative():
  
  a = 15.0
  b = -64.2
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_addF16_negative_negative():
  
  a = -17.61
  b = -51.41
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_subF16_positive_positive():
  
  a = 17.61
  b = 231.41
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_subF16_positive_negative():
  
  a = 15.0
  b = -64.2
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_subF16_negative_negative():
  
  a = -127.41
  b = -451.61
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)
# ========================================================================

# ====================== Tests for single-precision ======================
expWidth = 8
sigWidth = 24
precision = expWidth + sigWidth
tolerance = 0.0001

BN  = mk_bits(expWidth + sigWidth)
  
def test_addF32_ones():
  
  a = 1.0
  b = 1.0
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_addF32_positive_positive():
  
  a = 486.102
  b = 591.3031
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_addF32_positive_negative():
  
  a = 19284.1
  b = -581.875
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_addF32_negative_negative():
  
  a = -385.01
  b = -591.2021
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_subF32_positive_positive():
  
  a = 1.29301
  b = 12.5910
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_subF32_positive_negative():
  
  a = 82.40910
  b = -120.5
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_subF32_negative_negative():
  
  a = -692.21
  b = -12.49102
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)
# ========================================================================

# ====================== Tests for double-precision ======================
expWidth = 11
sigWidth = 53
precision = expWidth + sigWidth
tolerance = 0.000001

BN  = mk_bits(expWidth + sigWidth)
  
def test_addF64_ones():
  
  a = 1.0
  b = 1.0
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_addF64_positive_positive():
  
  a = 1829591.29201
  b = 58285.0291
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_addF64_positive_negative():
  
  a = 288.999102
  b = -12.59101
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_addF64_negative_negative():
  
  a = -192.491023
  b = -5.92929192931823
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_subF64_positive_positive():
  
  a = 18298481.949102
  b = 55.1022
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_subF64_positive_negative():
  
  a = 1829.5982182
  b = -239484.000192
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_subF64_negative_negative():
  
  a = -58182.1913
  b = -1293.10092
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp   a         b         roundingMode   out*'),
    [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)
# ========================================================================

# ================= Random testing for half-precision ====================
expWidth = 5
sigWidth = 11
precision = expWidth + sigWidth
tolerance = 0.0001

BN  = mk_bits(expWidth + sigWidth)

random.seed(precision)

def test_addF16_random():
  
  test_vector = []
  
  for test in range(10):
    a = get_rand(-22.5, 45.5, 2)
    b = get_rand(-22.5, 45.5, 2)
    out = a + b
  
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B1(0), BN(a), BN(b), B3(0), BN(out)])
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)
  
def test_subF16_random():
  
  test_vector = []
  
  for test in range(100):
    a = get_rand(-22.5, 45.5, 2)
    b = get_rand(-22.5, 45.5, 2)
    out = a - b
  
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B1(1), BN(a), BN(b), B3(0), BN(out)])
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)
# ========================================================================

# ================= Random testing for single-precision ==================
expWidth = 8
sigWidth = 24
precision = expWidth + sigWidth
tolerance = 0.00001

BN  = mk_bits(expWidth + sigWidth)

random.seed(precision)

def test_addF32_random():
  
  test_vector = []
  
  for test in range(100):
    a = get_rand(-1000.0, 1000.0, 4)
    b = get_rand(-1000.0, 1000.0, 4)
    out = a + b
  
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B1(0), BN(a), BN(b), B3(0), BN(out)])
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_subF32_random():
  
  test_vector = []
  
  for test in range(100):
    a = get_rand(-10000.0, 10000.0, 4)
    b = get_rand(-10000.0, 10000.0, 4)
    out = a - b
  
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B1(1), BN(a), BN(b), B3(0), BN(out)])
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)
# ========================================================================

# ================= Random testing for double-precision ==================
expWidth = 11
sigWidth = 53
precision = expWidth + sigWidth
tolerance = 0.000001

BN  = mk_bits(expWidth + sigWidth)

random.seed(precision)

def test_addF64_random():
  
  test_vector = []
  
  for test in range(100):
    a = get_rand(-1000000.0, 1000000.0, 6)
    b = get_rand(-1000000.0, 1000000.0, 6)
    out = a + b
  
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B1(0), BN(a), BN(b), B3(0), BN(out)])
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

def test_subF64_random():
  
  test_vector = []
  
  for test in range(100):
    a = get_rand(-3000.0, 3000.0, 6)
    b = get_rand(-3000.0, 3000.0, 6)
    out = a - b
  
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([B1(1), BN(a), BN(b), B3(0), BN(out)])
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)
# ========================================================================

# ================= Half-precision hypothesis testing ====================
expWidth = 5
sigWidth = 11
precision = expWidth + sigWidth
tolerance = 0.00001

@given( a = st.floats(min_value = -10000.0, max_value = 10000.0),
        b = st.floats(min_value = -10000.0, max_value = 10000.0))
@settings(deadline = None)
def test_hypothesis_addF16( a, b ):
  
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
      #  subOp   a         b         roundingMode   out*'),
      [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
  ],  precision, tolerance)
  
@given( a = st.floats(min_value = -3e-5, max_value = 1e+15),
        b = st.floats(min_value = -3e-5, max_value = 1e+15))
@settings(deadline = None)
def test_hypothesis_subF16( a, b ):
  
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
      #  subOp   a         b         roundingMode   out*'),
      [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
  ],  precision, tolerance)
# ========================================================================

# ================ Single-precision hypothesis testing ===================
expWidth = 8
sigWidth = 24
precision = expWidth + sigWidth
tolerance = 0.00000001

@given( a = st.floats(min_value=6e-39, max_value=6e+38),
        b = st.floats(min_value=6e-39, max_value=6e+38))
@settings(deadline = None)
def test_hypothesis_addF32( a, b ):
  
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
      #  subOp   a         b         roundingMode   out*'),
      [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
  ],  precision, tolerance)
  
@given( a = st.floats(min_value=6e-39, max_value=6e+38),
        b = st.floats(min_value=6e-39, max_value=6e+38))
@settings(deadline = None)
def test_hypothesis_subF32( a, b ):
  
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
      #  subOp   a         b         roundingMode   out*'),
      [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
  ],  precision, tolerance)
# ========================================================================

# ================ Single-precision hypothesis testing ===================
expWidth = 11
sigWidth = 53
precision = expWidth + sigWidth
tolerance = 0.00000000001

@given( a = st.floats(min_value=7e-308, max_value=7e+307),
        b = st.floats(min_value=7e-308, max_value=7e+307))
@settings(deadline = None)
def test_hypothesis_addF64( a, b ):
  
  out = a + b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
      #  subOp   a         b         roundingMode   out*'),
      [  B1(0),  BN(a),    BN(b),    B3(0),         BN(out), ],
  ],  precision, tolerance)

@given( a = st.floats(min_value=7e-308, max_value=7e+307),
        b = st.floats(min_value=7e-308, max_value=7e+307))
@settings(deadline = None)
def test_hypothesis_subF64( a, b ):
  
  out = a - b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
      #  subOp   a         b         roundingMode   out*'),
      [  B1(1),  BN(a),    BN(b),    B3(0),         BN(out), ],
  ],  precision, tolerance)
# ========================================================================

