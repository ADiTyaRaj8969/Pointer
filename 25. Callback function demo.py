"""
Callback demo: pass function as argument
"""
def caller(cb):
    cb(42)

def my_callback(x):
    print('Callback called with', x)

def main():
    caller(my_callback)

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
