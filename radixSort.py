def countSort(arr, exp1):
    n = len(arr)

    # Output elemnt array
    output = [0] * n

    # Initialize count array as 0
    count = [0] * (10)

    # Store number of occurances in count[]
    for i in range(0, n):
        index = arr[i]/exp1
        count[int(index%10)] += 1

    # Put cumulative count to get actual position 
    # of the digit in output array
    for i in range(1, 10):
        count[i] += count[i - 1]

    # Build the output array
    i = n - 1
    while i >= 0:
        index = (arr[i] / exp1)
        output[count[int(index%10)] - 1] = arr[i]
        count[int(index%10)] -= 1
        i -= 1
    
    # Copy output array in arr[]
    i = 0
    for i in range(len(arr)):
        arr[i] = output[i]

# Radix sort
def radixSort(arr):

    # Find maximum number to know number of digits
    max1 = max(arr)

    # Counting sort for every digit
    exp1 = 1
    while int(max1/exp1) > 0:
        countSort(arr, exp1)
        exp1 *= 10

# Driver code
arr = [190, 20, 3, 50, 24, 670, 90, 504]

radixSort(arr)

for i in range(len(arr)):
    print(arr[i], end = " ")