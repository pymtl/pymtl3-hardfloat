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
    dut.a            @= tv[0]
    dut.b            @= tv[1]
    dut.roundingMode @= tv[2]

  def tv_out( dut, tv ):
    test_out = fNToFloat(tv[3], precision=precision)
    actual_out = fNToFloat(dut.out, precision=precision)

    assert abs(test_out - actual_out) <= abs(tolerance*test_out)

  # Run the test
  dut.elaborate()
  dut.verilog_translate_import = True
  dut.apply( VerilogPlaceholderPass() )
  dut = TranslationImportPass()( dut )

  sim = TestVectorSimulator( dut, test_vectors, tv_in, tv_out )
  sim.run_test()

# ========================================================================

# ====================== Tests for half-precision ========================

def test_mulF16_ones():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  a = 1.0
  b = 1.0
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

def test_mulF16_positive_positive():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  a = 17.61
  b = 51.41
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

def test_mulF16_positive_negative():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  a = 15.0
  b = -64.2
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

def test_mulF16_negative_negative():

  expWidth = 5
  sigWidth = 11
  precision = expWidth + sigWidth
  tolerance = 0.001

  a = -17.61
  b = -51.41
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

# ==========================================================================

# ====================== Tests for single-precision ========================
def test_mulF32_ones():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.000001

  a = 1.0
  b = 1.0
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

def test_mulF32_positive_positive():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.000001

  a = 486.102
  b = 591.3031
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

def test_mulF32_positive_negative():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.000001

  a = 19284.1
  b = -581.875
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

def test_mulF32_negative_negative():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.000001

  a = -185.01
  b = -121.221
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

# ========================================================================

# ====================== Tests for double-precision ======================
def test_mulF64_ones():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  a = 1.0
  b = 1.0
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

def test_mulF64_positive_positive():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  a = 1829591.29201
  b = 58285.0291
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

def test_mulF64_positive_negative():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  a = 288.999102
  b = -12.59101
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

def test_mulF64_negative_negative():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  a = -192.491023
  b = -5.92929192931823
  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
],  precision, tolerance)

# ========================================================================

# ================= Random testing for single-precision ==================
def test_mulF32_random():

  expWidth = 8
  sigWidth = 24
  precision = expWidth + sigWidth
  tolerance = 0.000001

  random.seed(a=None) # uses current system time for seed

  test_vector = []

  for test in range(1000):
    a = get_rand(-10000.0, 10000.0, 4)
    b = get_rand(-10000.0, 10000.0, 4)
    out = a * b

    a = floatToFN(a, precision=precision)
    b = floatToFN(b, precision=precision)
    out = floatToFN(out, precision=precision)

    test_vector.append([a, b, 0, out])

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth),
  test_vector,  precision, tolerance)

# ========================================================================

# ================= Random testing for double-precision ==================
def test_mulF64_random():

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  random.seed(a=None) # uses current system time for seed

  test_vector = []

  for test in range(1000):
    a = get_rand(-1000000.0, 1000000.0, 6)
    b = get_rand(-1000000.0, 1000000.0, 6)
    out = a * b

    a = floatToFN(a, precision=precision)
    b = floatToFN(b, precision=precision)
    out = floatToFN(out, precision=precision)

    test_vector.append([a, b, 0, out])

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth),
  test_vector,  precision, tolerance)
# ========================================================================

# ================ Double-precision hypothesis testing ===================
@given( a = st.floats(min_value=-7e-120, max_value=7e+120),
        b = st.floats(min_value=-7e-120, max_value=7e+120))
@settings(deadline = None, max_examples=10)
def test_hypothesis_mulF64( a, b ):

  expWidth = 11
  sigWidth = 53
  precision = expWidth + sigWidth
  tolerance = 0.000001

  out = a * b

  a = floatToFN(a, precision=precision)
  b = floatToFN(b, precision=precision)
  out = floatToFN(out, precision=precision)

  run_tv_test( MulFN(expWidth = expWidth, sigWidth = sigWidth), [
    #   a   b   roundingMode  out*'),
    [   a,  b,  0,            out ],
  ],  precision, tolerance)

# ========================================================================
