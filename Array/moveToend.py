def moveToend(arr):
    count = 0
    for i in range(len(arr)):
        if(arr[i]!=0):
            arr[count], arr[i] = arr[i], arr[count]
            count +=1
    return arr

arr = [10, 5, 0, 0, 8, 0, 9, 0]
result = moveToend(arr)
print(result)
