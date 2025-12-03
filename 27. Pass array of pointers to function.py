"""
Pass array of pointers to a function (Python list of strings)
"""
def print_strings(arr):
    for s in arr: print(s)

def main():
    arr = ["one","two","three"]
    print_strings(arr)

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(1) additional space.
