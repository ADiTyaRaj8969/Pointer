"""
Topic: Reverse array using pointer-like operations
Description: Reverse using two indices simulating pointers
"""
def main():
    arr = [1,2,3,4,5,6]
    l = 0
    r = len(arr)-1
    while l < r:
        arr[l], arr[r] = arr[r], arr[l]
        l += 1; r -= 1
    print(arr)

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(1) additional space.
