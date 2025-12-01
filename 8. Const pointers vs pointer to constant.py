"""
Topic: Const pointer vs pointer to constant (Python conceptual demo)
Description: Python doesn't have const; demonstrate immutability and binding differences
"""
def main():
    a = 5
    b = 10
    p_to_const = a  # ints are immutable; cannot change value in-place
    p_to_const = b  # rebinding allowed
    lst = [1]
    const_ptr_like = lst
    const_ptr_like[0] = 2  # can modify content
    print('p_to_const:', p_to_const)
    print('const_ptr_like:', lst)

if __name__ == '__main__':
    main()

# Time Complexity: O(1).
# Space Complexity: O(1).
