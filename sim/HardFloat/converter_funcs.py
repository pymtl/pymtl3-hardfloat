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
  
  # used to access arrays of exponent and mantissa
  index = int(math.log2(precision)) - 4 
    
  # identifying whether the number is positive or negative 
  sign = '0'
  if n < 0 : 
      sign = '1'
      n = n * (-1) 
  
  #print('sign = ' + sign)
      
  # ================ Exponent part =================
  whole, dec = str(n).split(".")
  
  whole = int(whole)
  rem = []
  
  if(whole != 0):
    while(whole != 1):
      rem.insert(0, whole % 2)
      whole = int(whole / 2)
    
    rem.insert(0, 1)
  else:
    rem.insert(0, 1)
  
  rem_print = ''.join([str(elem) for elem in rem])
  #print('exp_raw_bin = ' + rem_print)
  
  exp_raw = len(rem) - 1
  #print('exp_raw = ' + str(exp_raw))
  
  exp_bin = (2 ** (exp_width[index] - 1)) - 1 + exp_raw 
  exp_bin = str(get_bin(exp_bin, exp_width[index]))
    
  #print('exp_bin = ' + exp_bin)
  
  # ================= Mantissa part ===================
  mantissa_raw = []
  dec = '0.' + dec
  
  for i in range(mantissa_width[index] - exp_raw):
    tmp = float(dec) * 2
    intg, frac = str(tmp).split(".")
    
    mantissa_raw.append(intg)
    
    dec = '0.' + frac
    
  mantissa_raw_print = ''.join([str(elem) for elem in mantissa_raw])
  #print('mantissa_raw = ' + mantissa_raw_print)
  
  for i in range(len(rem)):
    if (i != 0):
      mantissa_raw.insert(i-1, rem[i])
  
  mantissa = ''.join([str(elem) for elem in mantissa_raw])
  #print('mantissa = ' + mantissa)
  
  # =============== Merging together =================
  value = str(sign) + exp_bin + mantissa
  
  # return the answer to the driver code 
  return (int(value, 2)) 
# ========================================================================

# ========= IEEE-754 format to Floating-point number converter ===========
def fNToFloat( n, precision ) : 
  
  n = bin(n)[2:].zfill(precision) # converting number to string
  
  # used to access arrays of exponent and mantissa
  index = int(math.log2(precision)) - 4 
    
  sign = int(n[0])
  #print('sign = ' + str(sign))
  
  exp_raw = n[1:(exp_width[index]+1)]
  #print('exp_raw = ', exp_raw)
  
  exp = int(exp_raw, 2) - (2 ** (exp_width[index] - 1) - 1)
  #print('exp = ' + str(exp))
  
  mantissa_raw = n[(exp_width[index]+1) : precision]
  #print('mantissa_raw = ', mantissa_raw)
  
  mantissa = 1
  for i in range(len(mantissa_raw)):
    if(mantissa_raw[i] == '1'):
      mantissa = mantissa + 2**(-i-1)
  
  #print('mantissa = ', mantissa)
  
  num = ((-1)**(sign)) * (mantissa) * (2**(exp))
  
  
  # return the answer to the driver code 
  return (num) 
# ========================================================================

# Driver Code 
if __name__ == "__main__" : 
  
  num = 105.98
  precision = 16
  
  print('\nInitial number: ' + str(num))
  
  a = floatToFN(num, precision)
  print('\nBinary number: ' + str(bin(a)[2:].zfill(precision)))
    
  b = fNToFloat(a, precision)
  print('\nFloating-point number: ' + str(b) + '\n')


