"""
Return pointer from function – Python safe behavior (objects live beyond function)
"""
def return_local():
    x = [10]
    return x

def main():
    p = return_local()
    print(p[0])

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
