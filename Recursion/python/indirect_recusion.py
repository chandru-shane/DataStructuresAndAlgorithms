

"""
Indirect recursion is call one 
"""


def funcA(n):
    if (n > 0):
        print(n)
        funcB(n-1)
    
def funcB(n):
    if (n > 1):
        print(n)
        funcB(int(n/2))


if __name__ == "__main__":
    funcA(25)