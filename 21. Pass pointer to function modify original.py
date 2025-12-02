"""
Pass pointer to function – modify original variable (use list)
"""
def add_one(p):
    p[0] += 1

def main():
    x = [5]
    add_one(x)
    print(x[0])

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
