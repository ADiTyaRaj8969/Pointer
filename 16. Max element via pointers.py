"""
Topic: Find maximum element using pointer-like iteration
"""
def main():
    arr = [3,7,2,9,4]
    it = iter(arr)
    mx = next(it)
    for v in it:
        if v > mx: mx = v
    print('Max:', mx)

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(1).
