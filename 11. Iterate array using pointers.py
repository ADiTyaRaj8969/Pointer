"""
Topic: Iterate an array using pointer-like approach
Description: Use iterators instead of indexing to simulate pointer traversal
"""
def main():
    arr = [1,2,3,4,5]
    it = iter(arr)
    for x in it:
        print(x, end=' ')
    print()

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(1) additional space.
