
def largest(arr):
    max = arr[0]
    for i in range(1,len(arr)):
        if arr[i] > max:
            max = arr[i]
    
    return max

arr = [12,23,44,777,1]
result = largest(arr)
print(result)