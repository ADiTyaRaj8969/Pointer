"""
Topic: Copy string using pointer-like operations
Description: Build new string by iterating chars
"""
def main():
    src = "pointer demo"
    dst = ''.join([c for c in src])
    print('Copied:', dst)

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(n) for the copied string.
