p = 1
f = 1
def e(x,n):
    if n == 0:
        return 1
    r = e(x, n-1)
    global p,f
    p = p * x
    f = f * n
    return r + p/f
print(e(1,20))


 
    