# version 1
def power(m,n):
    if n == 0:
        return 1
    return power(m,n-1) * m

# optimized version 2
def power1(m,n):
    if n == 0:
        return 1
    elif n%2 == 0:
        return power1(m*m, n/2)
    else:
        return m * power1(m*m, (n-1)/2)

if __name__ == "__main__":
    print(f"{power(2,9)} this is from power")
    print(f"{power1(2,9)} this is from power1")