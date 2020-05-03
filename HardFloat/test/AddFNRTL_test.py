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
    dut.subOp        @= tv[0]
    dut.a            @= tv[1]
    dut.b            @= tv[2]
    dut.roundingMode @= tv[3]

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

def test_addF16_ones():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  a = 1.0
  b = 1.0
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp a   b   roundingMode  out*'),
    [  0,    a,  b,  0,            out, ],
],  precision, tolerance)

def test_addF16_positive_positive():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  a = 17.61
  b = 51.41
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_addF16_positive_negative():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  a = 15.0
  b = -64.2
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_addF16_negative_negative():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  a = -17.61
  b = -51.41
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)
  print(a,b,out)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_subF16_positive_positive():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  a = 17.61
  b = 231.41
  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  1,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_subF16_positive_negative():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  BN  = mk_bits(expWidth + sigWidth)

  a = 15.0
  b = -64.2
  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  1,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_subF16_negative_negative():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  BN  = mk_bits(expWidth + sigWidth)

  a = -127.41
  b = -451.61
  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  1,     a,  b,  0,             out, ],
],  precision, tolerance)
# ========================================================================

# ====================== Tests for single-precision ======================
def test_addF32_ones():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.0001

  BN  = mk_bits(expWidth + sigWidth)

  a = 1.0
  b = 1.0
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_addF32_positive_positive():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.0001

  BN  = mk_bits(expWidth + sigWidth)

  a = 486.102
  b = 591.3031
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_addF32_positive_negative():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.0001

  BN  = mk_bits(expWidth + sigWidth)

  a = 19284.1
  b = -581.875
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_addF32_negative_negative():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.0001

  BN  = mk_bits(expWidth + sigWidth)

  a = -385.01
  b = -591.2021
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_subF32_positive_positive():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.0001

  BN  = mk_bits(expWidth + sigWidth)

  a = 1.29301
  b = 12.5910
  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  1,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_subF32_positive_negative():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.0001

  BN  = mk_bits(expWidth + sigWidth)

  a = 82.40910
  b = -120.5
  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  1,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_subF32_negative_negative():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.0001

  BN  = mk_bits(expWidth + sigWidth)

  a = -692.21
  b = -12.49102
  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  1,     a,  b,  0,             out, ],
],  precision, tolerance)
# ========================================================================

# ====================== Tests for double-precision ======================
def test_addF64_ones():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)

  a = 1.0
  b = 1.0
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_addF64_positive_positive():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)

  a = 1829591.29201
  b = 58285.0291
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_addF64_positive_negative():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)

  a = 288.999102
  b = -12.59101
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_addF64_negative_negative():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)

  a = -192.491023
  b = -5.92929192931823
  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_subF64_positive_positive():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)

  a = 18298481.949102
  b = 55.1022
  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  1,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_subF64_positive_negative():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)

  a = 1829.5982182
  b = -239484.000192
  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  1,     a,  b,  0,             out, ],
],  precision, tolerance)

def test_subF64_negative_negative():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)

  a = -58182.1913
  b = -1293.10092
  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  1,     a,  b,  0,             out, ],
],  precision, tolerance)
# ========================================================================

# ================= Random testing for single-precision ==================
def test_addF32_random():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.001

  BN  = mk_bits(expWidth + sigWidth)

  random.seed(precision)

  test_vector = []

  for test in range(100):
    a = get_rand(-1000.0, 1000.0, 4)
    b = get_rand(-1000.0, 1000.0, 4)
    out = a + b

    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)

    test_vector.append([0, a, b, 0, out])

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth),
               test_vector,  precision, tolerance)

def test_subF32_random():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.001

  BN  = mk_bits(expWidth + sigWidth)

  random.seed(precision)

  test_vector = []

  for test in range(100):
    a = get_rand(-1000.0, 1000.0, 4)
    b = get_rand(-1000.0, 1000.0, 4)
    out = a - b

    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)

    test_vector.append([1, a, b, 0, out])

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth),
  test_vector,  precision, tolerance)
# ========================================================================

# ================= Random testing for double-precision ==================
def test_addF64_random():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)

  random.seed(a=None) # uses current system time for seed

  test_vector = []

  for test in range(100):
    a = get_rand(-1000000.0, 1000000.0, 6)
    b = get_rand(-1000000.0, 1000000.0, 6)
    out = a + b

    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)

    test_vector.append([0, a, b, 0, out])

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth),
  test_vector,  precision, tolerance)

def test_subF64_random():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  BN  = mk_bits(expWidth + sigWidth)

  random.seed(a=None) # uses current system time for seed

  test_vector = []

  for test in range(100):
    a = get_rand(-3000.0, 3000.0, 6)
    b = get_rand(-3000.0, 3000.0, 6)
    out = a - b

    a = floatToFN(a, precision)
    b = floatToFN(b, precision)
    out = floatToFN(out, precision)

    test_vector.append([1, a, b, 0, out])

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth),
  test_vector,  precision, tolerance)
# ========================================================================

# ================ Double-precision hypothesis testing ===================
@given( a = st.floats(min_value=-7e-308, max_value=7e+307),
        b = st.floats(min_value=-7e-308, max_value=7e+307))
@settings(deadline = None, max_examples=10)
def test_hypothesis_addF64( a, b ):

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.00000000001

  out = a + b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
  ],  precision, tolerance)

@given( a = st.floats(min_value=-7e-308, max_value=7e+307),
        b = st.floats(min_value=-7e-308, max_value=7e+307))
@settings(deadline = None, max_examples=10 )
def test_hypothesis_subF64( a, b ):

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.00000000001

  out = a - b

  a = floatToFN(a, precision)
  b = floatToFN(b, precision)
  out = floatToFN(out, precision)

  run_tv_test( AddFN(expWidth = expWidth, sigWidth = sigWidth), [
    #  subOp  a   b   roundingMode   out*'),
    [  0,     a,  b,  0,             out, ],
  ],  precision, tolerance)
# ========================================================================

