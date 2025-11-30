"""
Topic: Change a variable's value indirectly via pointer-like reference
Description: Use a list to simulate pass-by-reference in Python
"""
def main():
    x = [10]
    print('Before:', x[0])
    p = x  # both refer to same list
    p[0] = 99
    print('After via pointer-like:', x[0])

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
