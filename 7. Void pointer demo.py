"""
Topic: Void pointer-like demo in Python
Description: Use ctypes to get addresses and cast back
"""
import ctypes

def main():
    i = ctypes.c_int(10)
    d = ctypes.c_double(3.14)
    vp = ctypes.cast(ctypes.pointer(i), ctypes.c_void_p)
    print('int via void*:', ctypes.cast(vp, ctypes.POINTER(ctypes.c_int)).contents.value)
    vp = ctypes.cast(ctypes.pointer(d), ctypes.c_void_p)
    print('double via void*:', ctypes.cast(vp, ctypes.POINTER(ctypes.c_double)).contents.value)

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
