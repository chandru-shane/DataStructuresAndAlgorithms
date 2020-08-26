
def func(n):
    if n>0:
        func(n-1)
        print(n, end=' ')


if __name__ == '__main__':
    x = 5
    func(5)