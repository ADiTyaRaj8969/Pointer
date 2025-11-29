"""
Topic: Print address of a variable using a pointer-like reference
Description: Python doesn't expose raw pointers; use id() to show object address.
I/O: prints to stdout
"""
def main():
    x = 42
    print('Value:', x)
    print('Address (id):', hex(id(x)))

if __name__ == '__main__':
    main()

# Time Complexity: O(1) (constant-time demonstration).
# Space Complexity: O(1) additional space.
