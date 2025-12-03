"""
Function returning reference (pointer-like) demo
"""
def get_obj():
    return "hello"

def main():
    fp = get_obj
    print(fp())

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
