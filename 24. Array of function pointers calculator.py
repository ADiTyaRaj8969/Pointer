"""
Array of function pointers (list of functions) - calculator
"""
def add(a,b): return a+b
def sub(a,b): return a-b
def mul(a,b): return a*b
def div(a,b): return a//b if b else 0

def main():
    calc = [add, sub, mul, div]
    a,b = 10,5
    print([f(a,b) for f in calc])

if __name__ == '__main__':
    main()

# Time Complexity: O(1) per function call.
# Space Complexity: O(1).
