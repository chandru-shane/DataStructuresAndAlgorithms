# TIME COMPLEXITY : O(n)
# SPACE COMPLEXITY: O(n)

def sum_n(n):
    if n == 0 :
        return 0
    else:
        return sum_n(n-1) + n


if __name__ == "__main__":
    print(sum_n(10))