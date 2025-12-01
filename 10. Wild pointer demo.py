"""
Topic: Wild pointer demonstration (Python explanation)
Description: Python variables are always initialized; uninitialized pointer concept doesn't apply.
"""
def main():
    try:
        print(undefined_variable)  # NameError
    except NameError:
        print('No wild pointers in Python; uninitialized names raise NameError')

if __name__ == '__main__':
    main()
    # Time Complexity: O(1).
    # Space Complexity: O(1).
