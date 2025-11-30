"""
Topic: Swap two numbers using pointer-like references
Description: Use lists to swap without returning values
"""
def swap_vals(a, b):
    a[0], b[0] = b[0], a[0]

def main():
    x = [5]; y = [10]
    print('Before:', x[0], y[0])
    swap_vals(x, y)
    print('After:', x[0], y[0])

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
