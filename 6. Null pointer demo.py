"""
Topic: Null pointer demonstration in Python
Description: Use None and check before 'dereferencing' (access)
"""
def main():
    p = None
    if p is None:
        print('Pointer is None, not accessing.')
    else:
        print(p[0])

if __name__ == '__main__':
    main()
    # Time Complexity: O(1).
    # Space Complexity: O(1).
