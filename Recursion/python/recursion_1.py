
def func(n):
    if n>0:
        print(n, end=' ')
        func(n-1)


if __name__ == '__main__':
    x = 5
    func(x)