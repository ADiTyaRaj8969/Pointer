"""
Topic: Pointer to pointer simulation
Description: Use nested lists to simulate int**, print value and "address" via id()
"""
def main():
    x = [7]
    p = x
    pp = [p]
    print('x =', x[0])
    print('p id =', hex(id(p)), 'value =', p[0])
    print('pp id =', hex(id(pp)), 'points to id =', hex(id(pp[0])), 'value =', pp[0][0])

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
