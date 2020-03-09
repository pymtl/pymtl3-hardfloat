#=========================================================================
# Unit testing for mulFNRTL PyMTL wrapper module 
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from pymtl3.stdlib.test import TestVectorSimulator
from pymtl3.passes.backends.verilog import VerilogPlaceholderPass
    
from HardFloat.MulFNRTL import MulFN 
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
    dut.a            = tv[0]
    dut.b            = tv[1]
    dut.roundingMode = tv[2]

  def tv_out( dut, tv ):
    test_out = fNToFloat(tv[3], precision)
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

# ====================== Tests for half-precision ========================
expWidth = 5
sigWidth = 11
precision = expWidth + sigWidth
tolerance = 0.001

B1  = mk_bits(1)
B3  = mk_bits(3)
BN  = mk_bits(expWidth + sigWidth)
  
def test_mulF16_ones():
  
  a = 1.0
  b = 1.0
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_mulF16_positive_positive():
  
  a = 17.61
  b = 51.41
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_mulF16_positive_negative():
  
  a = 15.0
  b = -64.2
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_mulF16_negative_negative():
  
  a = -17.61
  b = -51.41
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

# ==========================================================================
  
# ====================== Tests for single-precision ========================
def test_mulF32_ones():
  
  a = 1.0
  b = 1.0
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_mulF32_positive_positive():
  
  a = 486.102
  b = 591.3031
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_mulF32_positive_negative():
  
  a = 19284.1
  b = -581.875
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_mulF32_negative_negative():
  
  a = -385.01
  b = -591.2021
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

# ========================================================================

# ====================== Tests for double-precision ======================
expWidth = 11
sigWidth = 53
precision = expWidth + sigWidth
tolerance = 0.000001

BN  = mk_bits(expWidth + sigWidth)
  
def test_mulF64_ones():
  
  a = 1.0
  b = 1.0
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_mulF64_positive_positive():
  
  a = 1829591.29201
  b = 58285.0291
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_mulF64_positive_negative():
  
  a = 288.999102
  b = -12.59101
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

def test_mulF64_negative_negative():
  
  a = -192.491023
  b = -5.92929192931823
  out = a * b
  
  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a         b         roundingMode   out*'),
    [   BN(a),    BN(b),    B3(0),         BN(out), ],
],  precision, tolerance)

# ========================================================================

# ================= Random testing for half-precision ====================
expWidth = 5
sigWidth = 11
precision = expWidth + sigWidth
tolerance = 0.0001

BN  = mk_bits(expWidth + sigWidth)

random.seed(precision)

def test_mulF16_random():
  
  test_vector = []
  
  for test in range(10):
    a = get_rand(-22.5, 45.5, 2)
    b = get_rand(-22.5, 45.5, 2)
    out = a * b
  
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([BN(a), BN(b), B3(0), BN(out)])
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)
  
# ========================================================================

# ================= Random testing for single-precision ==================
expWidth = 8
sigWidth = 23
precision = expWidth + sigWidth
tolerance = 0.00001

BN  = mk_bits(expWidth + sigWidth)

random.seed(precision)

def test_mulF32_random():
  
  test_vector = []
  
  for test in range(100):
    a = get_rand(-1000.0, 1000.0, 4)
    b = get_rand(-1000.0, 1000.0, 4)
    out = a * b
  
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([BN(a), BN(b), B3(0), BN(out)])
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)

# ========================================================================

# ================= Random testing for double-precision ==================
expWidth = 11
sigWidth = 53
precision = expWidth + sigWidth
tolerance = 0.00001

BN  = mk_bits(expWidth + sigWidth)

random.seed(precision)

def test_mulF64_random():
  
  test_vector = []
  
  for test in range(100):
    a = get_rand(-1000000.0, 1000000.0, 6)
    b = get_rand(-1000000.0, 1000000.0, 6)
    out = a * b
  
    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)
    
    test_vector.append([BN(a), BN(b), B3(0), BN(out)])
  
  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), 
  test_vector,  precision, tolerance)
# ========================================================================


