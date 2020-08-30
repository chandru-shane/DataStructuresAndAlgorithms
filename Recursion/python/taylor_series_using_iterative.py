
def e(x, n):
    s =1
    num = 1
    den = 1
    for i in range(1,n+1):
        num *=x
        den *= i
        s += num/den
    return s


if __name__ == "__main__":
    print(e(1,10))