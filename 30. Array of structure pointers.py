"""
Array of structure pointers: Python list of objects
"""
class Node:
    def __init__(self, id): self.id = id

def main():
    arr = [Node(i) for i in range(3)]
    for n in arr: print(n.id)

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(n).
