"""
Swap two arrays using pointer-like operations and functions
"""
def swap_arrays(a, b):
    for i in range(len(a)): a[i], b[i] = b[i], a[i]

def main():
    a = [1,2,3]; b = [4,5,6]
    swap_arrays(a,b)
    print(a)
    print(b)

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(1).
