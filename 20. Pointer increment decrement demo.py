"""
Topic: Pointer increment/decrement simulation (show id changes for different element types)
"""
import ctypes

def main():
    ai = (ctypes.c_int * 2)(0,1)
    ac = (ctypes.c_char * 2)(b'a', b'b')
    af = (ctypes.c_float * 2)(0.0, 1.0)
    print('int size:', ctypes.sizeof(ctypes.c_int))
    print('char size:', ctypes.sizeof(ctypes.c_char))
    print('float size:', ctypes.sizeof(ctypes.c_float))
    print('int addr0:', hex(ctypes.addressof(ai)), 'addr1:', hex(ctypes.addressof(ai) + ctypes.sizeof(ctypes.c_int)))
    print('char addr0:', hex(ctypes.addressof(ac)), 'addr1:', hex(ctypes.addressof(ac) + ctypes.sizeof(ctypes.c_char)))
    print('float addr0:', hex(ctypes.addressof(af)), 'addr1:', hex(ctypes.addressof(af) + ctypes.sizeof(ctypes.c_float)))

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
