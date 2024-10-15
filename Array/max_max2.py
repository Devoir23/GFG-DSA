def largestAndSecondLargest(arr):
    n = len(arr)
    max_value , max2 = float('-inf'), float('-inf')

    # single traversal approach
    for i in arr:
        if i > max_value:
            max2= max_value
            max_value = i
        elif i > max2 and i!= max_value:
            max2=i

    # if no second max exist return -1 
    if max2 == float('-inf'):
        max2= -1

    return [max_value, max2]

arr = [2,1,2]
result = largestAndSecondLargest(arr)
print(f"max: {result[0]}, max2: {result[1]}")