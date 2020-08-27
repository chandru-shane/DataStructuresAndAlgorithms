
i = 0

def func(n):
    if n > 0:
        global i 
        i += 1
        return func(n-1) + i
    return 0


if __name__ == "__main__":
    print(func(5))