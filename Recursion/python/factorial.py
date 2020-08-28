# TIME COMPLEXITY : O(n)
# SPACE COMPLEXITY: O(n)

def fact(n):
    if n==0:
        return 1
    return fact(n-1) * n



if __name__ == "__main__":
    x = fact(10)
    print(fact(5))
    