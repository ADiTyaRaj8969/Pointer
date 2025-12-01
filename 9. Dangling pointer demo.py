"""
Topic: Dangling pointer demo (conceptual in Python)
Description: Python manages object lifetimes; returning a reference to local is safe due to refcounts/GC.
"""
def bad_function():
    x = [42]
    return x

def main():
    p = bad_function()
    print('Returned object is still valid:', p[0])

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
