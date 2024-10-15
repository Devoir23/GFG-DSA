def maxIndexDiff(arr):
    n = len(arr)

    # left min
    lMin = [0] * n
    lMin[0] = arr[0]
    for i in range (1,n):
        lMin[i] = min(arr[i], lMin[i-1])

    # right max
    rMax = [0] * n 
    rMax[n-1] = arr[n-1]
    for j in range(n - 2, -1, -1):
        rMax[j] = max(arr[j], rMax[j + 1])

    i, j, maxDiff = 0, 0, -1
    while i < n and j < n:
        if lMin[i] <= rMax[j]:
            maxDiff = max(maxDiff, j-i)
            j +=1
        else:
            i +=1
            
    return maxDiff


arr = [15]
result = maxIndexDiff(arr)
print(result)