"""
Function pointer demo in Python: use functions as first-class objects
"""
def add(a,b): return a+b
def sub(a,b): return a-b
def mul(a,b): return a*b
def div(a,b): return a//b if b else 0

def operate(op, a, b):
    return op(a,b)

def main():
    ops = [add, sub, mul, div]
    print('add via ops[0]:', ops[0](4,2))
    print('operate(callback):', operate(mul, 3, 5))

if __name__ == '__main__':
    main()

# Time Complexity: O(1) for individual calls.
# Space Complexity: O(1).
