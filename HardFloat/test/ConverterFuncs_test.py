#=========================================================================
# Unit testing for AddFNRTL PyMTL wrapper module
#=========================================================================

from pymtl3 import *
from pymtl3.stdlib.test import run_test_vector_sim
from pymtl3.stdlib.test import TestVectorSimulator
from pymtl3.passes.backends.verilog import VerilogPlaceholderPass
from pymtl3.datatypes import strategies as pm_st

import hypothesis
from hypothesis import given
from hypothesis import settings
from hypothesis import strategies as st

from HardFloat.converter_funcs import floatToFN, fNToFloat

import math
import random

# ========================== Helper functions ============================
def get_rand( low, high, precision ):
  val = round(random.uniform(low, high), precision)
  while abs(val) < 1:
    val = round(random.uniform(low, high), precision)

# ========================================================================

# =================== Half-precision directed tests ======================

def test_addF16_positive():
  precision = 16
  tolerance = 0.01

  in_float  = 17.29
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF16_negative():
  precision = 16
  tolerance = 0.01

  in_float  = -18.49
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF16_abs_less_than_one():
  precision = 16
  tolerance = 0.01

  in_float  = 0.52
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

  in_float  = -0.12
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF16_trailing_zeroes():
  precision = 16
  tolerance = 0.01

  in_float  = 12.008
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF16_integer():
  precision = 16
  tolerance = 0.01

  in_float  = 24
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

  in_float  = -58.0
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

# ========================================================================

# ================== Single-precision directed tests =====================

def test_addF32_positive():
  precision = 32
  tolerance = 0.000001

  in_float  = 182.94011
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF32_negative():
  precision = 32
  tolerance = 0.00001

  in_float  = -192.491
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF32_abs_less_than_one():
  precision = 32
  tolerance = 0.000001

  in_float  = 0.29481
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

  in_float  = -0.511003
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF32_trailing_zeroes():
  precision = 32
  tolerance = 0.0001

  in_float  = 1289.00019
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF32_integer():
  precision = 32
  tolerance = 0.000001

  in_float  = 5819
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

  in_float  = -9930.0
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

# ========================================================================

# ================== Double-precision directed tests =====================

def test_addF64_positive():
  precision = 64
  tolerance = 0.00000001

  in_float  = 27367198.201812
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF64_negative():
  precision = 64
  tolerance = 0.00000001

  in_float  = -18884.101
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF64_abs_less_than_one():
  precision = 64
  tolerance = 0.00000001

  in_float  = 0.299994812
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

  in_float  = -0.2300001
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF64_trailing_zeroes():
  precision = 64
  tolerance = 0.00000001

  in_float  = 3919.0000192
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

def test_addF64_integer():
  precision = 64
  tolerance = 0.00000001

  in_float  = 481331.0
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

  in_float  = -5818283
  in_rec    = floatToFN(in_float, precision=precision)
  out_float = fNToFloat(in_rec, precision=precision)

  assert abs(in_float - out_float) < tolerance

# ================= hypothesis testing ====================

@settings(max_examples=1000)
@given( in_float = st.floats(width=16, allow_infinity=True, allow_nan=True) )
def test_hypothesis_16( in_float ):

  in_rec    = floatToFN(in_float, precision=16)
  out_float = fNToFloat(in_rec, precision=16)
  print(in_float, hex(in_rec), out_float)

  if math.isnan(in_float):  assert math.isnan(out_float)
  else:                     assert in_float == out_float

# sigh, native python log2 cannot handle values that are close to max
@settings(max_examples=1000)
@given( in_float = st.floats(width=32, allow_infinity=True, allow_nan=True) )
def test_hypothesis_32( in_float ):

  in_rec    = floatToFN(in_float, precision=32)
  out_float = fNToFloat(in_rec, precision=32)
  print(in_float, hex(in_rec), out_float)

  if math.isnan(in_float):  assert math.isnan(out_float)
  else:                     assert in_float == out_float

@settings(max_examples=1000)
@given( in_float = st.floats(width=64, min_value=-1e20, max_value=1e20,allow_infinity=False, allow_nan=False) )
def test_hypothesis_64_small( in_float ):

  in_rec    = floatToFN(in_float, precision=64)
  out_float = fNToFloat(in_rec, precision=64)
  print(in_float, hex(in_rec), out_float)

  assert in_float == out_float

@settings(max_examples=1000)
@given( in_float = st.floats(width=64, min_value=-1.79E308, max_value=1.79E308,allow_infinity=False, allow_nan=False) )
def test_hypothesis_64_big( in_float ):

  in_rec    = floatToFN(in_float, precision=64)
  out_float = fNToFloat(in_rec, precision=64)
  print(in_float, hex(in_rec), out_float)

  if math.isnan(in_float):
    assert math.isnan(out_float)
  elif in_float == float("inf") or in_float == float("-inf"):
    assert out_float == in_float
  else:
    assert abs(in_float - out_float) <= abs((1e-10)*in_float)
