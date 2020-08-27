
"""
nested recursion function call will pass function call as argument
"""

def func(n):
    if n > 100:
        return n - 10
    return func(func(n+11))



if __name__ == "__main__":
    x = 98
    print(func(x))