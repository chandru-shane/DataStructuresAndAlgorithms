# TIME COMPLEXITY : O(n)
# SPACE COMPLEXITY: O(1)

def func(m,n):
    result = 1

    for _ in range(0,n):
        result =  result * m
    return result


if __name__ == "__main__":
    print(func(2,9))