"""
Topic: Compare two strings using pointer-like iteration
Description: Return 0 if equal
"""
def strcmp_ptr(a, b):
    if len(a) != len(b):
        return 1
    for x, y in zip(a, b):
        if x != y:
            return ord(x) - ord(y)
    return 0

def main():
    print('Equal' if strcmp_ptr('abc','abc')==0 else 'Not equal')

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(1).
