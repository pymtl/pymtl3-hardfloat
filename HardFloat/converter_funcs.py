# ========================================================================
# This file contains the declaration of two functions:
#
# floatToStd( x, precision ): converts a floating point number to the 
# IEEE-754 format
#
# stdToFloat( x, precision ): converts a number in IEEE-754 format to 
# a floating point number
#
# NOTE: precision works as follows: half (16), single (32), double (64),
# and quadruple (128)
# ========================================================================

import math

exp_width      = [5, 8, 11, 15]
mantissa_width = [10, 23, 52, 112]

# ========================== Helper functions ============================
# Function to properly handle trailing values that start with 0
def decConv( dec ):
  num = 0
  index = 0
    
  while(dec[index] == '0'):
    num = num + 1
    index = index + 1
          
  return int(dec) * 10**(-num)
  
# Function for converting decimal to binary 
def float_bin(number, places = 3): 
  whole, dec = str(number).split(".")  
  whole = int(whole)  
  
  if(int(dec) != 0):
    dec = decConv( dec )
  else:
    dec = int(dec)
    
  print(dec)
    
  res = bin(whole).lstrip("0b") + "."

  for x in range(places):  
    whole, dec = str((decimal_converter(dec)) * 2).split(".")
      
    if(int(dec) != 0):
      dec = decConv( dec )
    else:
      dec = int(dec) 
       
    res += whole 
       
  return res  
  
def decimal_converter(num):   
  while num > 1:  
      num /= 10
  return num 
    
get_bin = lambda x, n: format(x, 'b').zfill(n)
# ========================================================================

# ========= Floating-point number to IEEE-754 format converter ===========
def floatToFN( n, precision ) : 
  
  # Base case of 0 (easier to implement this way)
  if(n == 0):
    return 0
    
  # Used to access arrays of exponent and mantissa
  index = int(math.log2(precision)) - 4 
    
  # Identifying whether the number is positive or negative 
  sign = '0'
  if n < 0 : 
      sign = '1'
      n = n * (-1) 
  
  # If integer, change to float
  if str(n).find('.') == -1: # integer
    n_str = str(n) + '.0'
  else:
    n_str = str(n)  
      
  format_str = '.' + str(precision * 2) + 'f' # case of e- 
  n = format(n, format_str)
    
  whole, dec = n.split(".")
  
# =========================== Exponent part ============================
  whole = int(whole)
  exp_raw_bin = []
  
  if(whole != 0):
    while(whole != 1):
      exp_raw_bin.insert(0, whole % 2)
      whole = int(whole / 2)
    
    exp_raw_bin.insert(0, 1)
    
    exp_len = len(exp_raw_bin) - 1
    
  else:
    exp_raw_bin.insert(0, 0)
    exp_len = 1
      
  exp_raw_bin = ''.join([str(elem) for elem in exp_raw_bin]) 
   
  # ========================= Mantissa part ==============================
  mantissa_raw = []
  dec = '0.' + dec
  frac = '1'
  bit_idx = 0
  bit_idx_max = 1000 # fixed (for very large/small numbers
  
  while bit_idx < bit_idx_max:
    
    if(int(frac, 10) == 0):
      mantissa_raw.append('0')
    else:
      tmp_dec = float(dec) * 2
            
      tmp_dec = format(tmp_dec, format_str)
            
      intg, frac = tmp_dec.split(".")
      intg = intg.replace(" ", "") # formatting
            
      mantissa_raw.append(intg)
        
      dec = '0.' + frac
      
    bit_idx = bit_idx + 1
      
  for i in range(len(exp_raw_bin)):
    if (i != 0):
      mantissa_raw.insert(i-1, exp_raw_bin[i])
  
  mantissa_raw_orig = ''.join([str(elem) for elem in mantissa_raw])
  
  # ========================= Merging together ===========================
  if(exp_raw_bin == '0'): # for |num| < 1 
    
    if not('1' in mantissa_raw):
      return 0 # number too small, rounded down to 0
    else:  
      exp_idx_raw = mantissa_raw.index('1') + 1
      exp_idx = (-exp_idx_raw) 
          
      exp_raw = (2 ** (exp_width[index] - 1)) - 1 + exp_idx
      
      exp_bin = str(get_bin(exp_raw, exp_width[index]))
            
      ext_zeroes = ['0' for i in range(exp_idx_raw + exp_len)]
          
      mantissa_raw = mantissa_raw[exp_idx_raw:]
      mantissa_raw.extend(ext_zeroes)
      mantissa = mantissa_raw[:mantissa_width[index]]
    
    mantissa = ''.join([str(elem) for elem in mantissa])
            
    value = str(sign) + exp_bin + mantissa
    
  else: # any other number
    
    exp_raw = (2 ** (exp_width[index] - 1)) - 1 + exp_len   
    exp_bin = str(get_bin(exp_raw, exp_width[index]))
        
    mantissa = mantissa_raw_orig[:mantissa_width[index]]
    
    value = str(sign) + exp_bin + mantissa
    
  # Return converted number
  return (int(value, 2)) 
# ========================================================================

# ========= IEEE-754 format to Floating-point number converter ===========
def fNToFloat( n, precision ) : 
  
  n = bin(n)[2:].zfill(precision) # converting number to string
  
  # Used to access arrays of exponent and mantissa
  index = int(math.log2(precision)) - 4 
    
  sign = int(n[0])
  
  exp_raw = n[1:(exp_width[index]+1)]
  
  exp = int(exp_raw, 2) - (2 ** (exp_width[index] - 1) - 1)
  
  mantissa_raw = n[(exp_width[index]+1) : precision]
  
  mantissa = 1
  for i in range(len(mantissa_raw)):
    if(mantissa_raw[i] == '1'):
      mantissa = mantissa + 2**(-i-1)
    
  num = ((-1)**(sign)) * (mantissa) * (2**(exp))
  
  # Return converted number
  return (num) 
# ========================================================================



