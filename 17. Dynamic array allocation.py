"""
Topic: Dynamic array allocation (Python list demo)
"""
def main():
    n = 5
    arr = [0]*n
    for i in range(n): arr[i] = i*2
    print(arr)

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(n).
