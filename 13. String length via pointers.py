"""
Topic: Find string length using pointer arithmetic (no len)
Description: Iterate until StopIteration emulating pointer traversal
"""
def main():
    s = "hello world"
    count = 0
    for _ in s:
        count += 1
    print('Length:', count)

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(1) additional space.
