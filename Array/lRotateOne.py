def lrotateOne(arr):
    n = len(arr)
    temp = arr[0]
    for i in range(1,n):
        arr[i-1] = arr[i]
    arr[n-1] = temp
    return arr

arr = [2,3,4,5,1,3]
result = lrotateOne(arr)
print(result)