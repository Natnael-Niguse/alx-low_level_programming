# File: mylib.py

import ctypes

# Load the shared library
mylib = ctypes.CDLL('./mylib.so')

# Declare the argument and return types of the functions
mylib.add.argtypes = (ctypes.c_int, ctypes.c_int)
mylib.add.restype = ctypes.c_int

mylib.sub.argtypes = (ctypes.c_int, ctypes.c_int)
mylib.sub.restype = ctypes.c_int

mylib.mul.argtypes = (ctypes.c_int, ctypes.c_int)
mylib.mul.restype = ctypes.c_int

mylib.div.argtypes = (ctypes.c_int, ctypes.c_int)
mylib.div.restype = ctypes.c_int

mylib.mod.argtypes = (ctypes.c_int, ctypes.c_int)
mylib.mod.restype = ctypes.c_int

# Call the functions
a = 42
b = 7
print("{} + {} = {}".format(a, b, mylib.add(a, b)))
print("{} - {} = {}".format(a, b, mylib.sub(a, b)))
print("{} x {} = {}".format(a, b, mylib.mul(a, b)))
print("{} / {} = {}".format(a, b, mylib.div(a, b)))
print("{} % {} = {}".format(a, b, mylib.mod(a, b)))
