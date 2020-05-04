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
from hypothesis import strategies as st

from HardFloat.converter_funcs import floatToFN, fNToFloat

import random

# ========================== Helper functions ============================
def get_rand( low, high, precision ):
  val = round(random.uniform(low, high), precision)
  while abs_val(val) < 1:
    val = round(random.uniform(low, high), precision)

def abs_val( x ):
  if(x < 0):
    return -x
  else:
    return x
# ========================================================================

# =================== Half-precision directed tests ======================
precision = 16
tolerance = 0.00001

def test_addF16_positive():

  in_float  = 17.29
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF16_negative():

  in_float  = -18.49
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF16_abs_less_than_one():

  in_float  = 0.52
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

  in_float  = -0.12
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF16_trailing_zeroes():

  in_float  = 12.008
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF16_integer():

  in_float  = 24
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

  in_float  = -58.0
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)
# ========================================================================

# ================== Single-precision directed tests =====================
precision = 32
tolerance = 0.00000001

def test_addF32_positive():

  in_float  = 182.94011
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF32_negative():

  in_float  = -192.491
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF32_abs_less_than_one():

  in_float  = 0.29481
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

  in_float  = -0.511003
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF32_trailing_zeroes():

  in_float  = 1289.00019
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF32_integer():

  in_float  = 5819
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

  in_float  = -9930.0
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)
# ========================================================================

# ================== Double-precision directed tests =====================
precision = 64
tolerance = 0.000001

def test_addF64_positive():

  in_float  = 27367198.201812
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF64_negative():

  in_float  = -18884.101
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF64_abs_less_than_one():

  in_float  = 0.299994812
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

  in_float  = -0.2300001
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF64_trailing_zeroes():

  in_float  = 3919.0000192
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

def test_addF64_integer():

  in_float  = 481331.0
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)

  in_float  = -5818283
  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)
# ========================================================================

# ================= Half-precision hypothesis testing ====================
precision = 16

@given( in_float = st.floats(min_value = -10000.0, max_value = 10000.0) )
def test_hypothesis_F16( in_float ):

  tolerance = 0.0000001

  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)
# ========================================================================

# ================ Single-precision hypothesis testing ===================
precision = 32

@given( in_float = st.floats(width = precision, allow_infinity=False, allow_nan=False) )
def test_hypothesis_F32( in_float ):

  tolerance = 0.0000000001

  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)
# ========================================================================

# ================ Single-precision hypothesis testing ===================
precision = 64

@given( in_float = st.floats(width = precision, allow_infinity=False, allow_nan=False) )
def test_hypothesis_F64( in_float ):

  tolerance = 0.000000000000000000001

  in_rec    = floatToFN(in_float, precision)
  out_float = fNToFloat(in_rec, precision)

  abs_diff = abs_val(in_float - out_float)

  assert(abs_diff < tolerance)
# ========================================================================
















































