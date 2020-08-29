s = 1
def e(x, n):
    while(n > 0):
        global s
        s = 1 + x*s/n
        n -= 1
    return s

if __name__ == "__main__":
    print(e(1,10))
