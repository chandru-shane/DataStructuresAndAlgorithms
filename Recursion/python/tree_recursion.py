# TIME COMPLEXITY : O(2^n)
# SPACE COMPLEXITY: O(n)

"""
Tree recursive function is having more than one recursive call
"""

def func(n):
    if n > 0:
        print(n)
        func(n-1)
        func(n-1)


if __name__ == "__main__":
    x = 5
    func(x)
    