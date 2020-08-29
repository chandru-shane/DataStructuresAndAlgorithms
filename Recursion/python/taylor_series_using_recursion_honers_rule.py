
s = 1
def e(x, n):
    global s
    if n == 0:
        return s
    
    s = 1 + x*s /n
    return e(x, n-1)

if __name__ == "__main__":
    print(e(2,10))