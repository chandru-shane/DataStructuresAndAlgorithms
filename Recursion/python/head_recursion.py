# TIME COMPLEXITY : O(n)
# SPACE COMPLEXITY: O(n)

def func(n):
    if n > 0:
        func(n-1)
        print(n)


if __name__ == "__main__":
    x = 5
    func(5)