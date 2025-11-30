"""
Topic: Print value and address at each pointer level (simulate)
Description: Use nested lists to simulate single/double/triple pointers
"""
def main():
    x = [100]
    p = x
    pp = [p]
    ppp = [pp]
    print('x =', x[0], 'id(x)=', hex(id(x)))
    print('p->', p[0], 'id(p)=', hex(id(p)))
    print('pp->', pp[0][0], 'id(pp)=', hex(id(pp)))
    print('ppp->', ppp[0][0][0], 'id(ppp)=', hex(id(ppp)))

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
