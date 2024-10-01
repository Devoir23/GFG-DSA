import time

def largest(arr):
    max = arr[0]
    for i in range(1,len(arr)):
        if arr[i] > max:
            max = arr[i]
    
    return max

start_time = time.time()
arr = [12,23,44,777,1]
result = largest(arr)
end_time = time.time()
execution_time = end_time - start_time

print(result)
print(f"Execution time: {execution_time:.6f} seconds")
