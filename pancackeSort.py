def flip(arr, i):
    start = 0
    while start < i:
        temp = arr[start]
        arr[start] = arr[i]
        arr[i] = temp
        start += 1
        i -= 1

def findMax(arr, n):
    mi = 0
    for i in range(0, n):
        if(arr[i] > arr[mi]):
            mi = i
    return mi

def pancakeSort(arr, n):
    cur_size = n
    while cur_size > 1:
        mi = findMax(arr, cur_size)

        if mi != cur_size -1:
            flip(arr, mi)
            flip(arr, cur_size -1)

        cur_size -= 1

def printArray(arr, n):
    for i in range(n):
        print("%d"%(arr[i]), end = " ")

# Driver program
arr = [34, 20, 4, 20, 200, 2]
n = len(arr)
pancakeSort(arr, n)
print("Sorted Array: ")
printArray(arr, n)