"""
Structure pointer demo (Python class and list of objects)
"""
class Person:
    def __init__(self, name, age):
        self.name = name; self.age = age

def main():
    p = Person('Alice', 30)
    pp = p
    print(pp.name, pp.age)
    arr = [Person('Bob',25), Person('Carol',28)]
    for person in arr: print(person.name, person.age)

if __name__ == '__main__':
    main()

# Time Complexity: O(n).
# Space Complexity: O(n).
