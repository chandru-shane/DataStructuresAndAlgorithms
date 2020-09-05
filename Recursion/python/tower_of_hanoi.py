

def tower_of_hanoi(n, A, B, C):
    if (n>0):
        tower_of_hanoi(n-1, A, C, B)
        print(f"{A} {C}")
        tower_of_hanoi(n-1, B, A, C)

tower_of_hanoi(3, 1,2,3)