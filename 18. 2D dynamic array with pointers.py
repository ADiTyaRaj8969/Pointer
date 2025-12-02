"""
Topic: 2D array (list of lists) demo
"""
def main():
    r, c = 3, 4
    mat = [[i*c + j for j in range(c)] for i in range(r)]
    for row in mat: print(row)

if __name__ == '__main__':
    main()

# Time Complexity: O(r*c).
# Space Complexity: O(r*c).
