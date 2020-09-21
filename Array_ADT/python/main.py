

def display(arr):
    for i in arr:
        print(i)


def linear_search(arr, key):
    i = 0
    while(i < len(arr)):
        if arr[i] == key:
            return i
        i += 1
    return -1

def binary_search(arr, key):
    l = 0
    h = len(arr)-1
    while(l <= h):
        mid = (l+h)//2
        print(l)
        print(h)
        print(mid)
        if (arr[mid] == key):
            return mid
        elif(key < arr[mid]):
            h = mid -1
        else:
            l = mid + 1
    return -1

if __name__ == '__main__':
    arr = [1,2,3,4,7]
    print(binary_search(arr, 8))
    