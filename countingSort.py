# Sort given string in alphabetical order
def countSort(arr):
    # Output character array
    output = ["" for i in range(len(arr))]

    # List to keep count for the characters and
    # initialize it with 0
    count = [0 for i in range(256)]

    # Result string.
    # Since strings are immutable
    ans = ["" for _ in arr]

    # Count of each character
    for i in arr:
        count[ord(i)] += 1

    # Change count[i] so that its the actual position 
    # of this character
    for i in range(256):
        count[i] += count[i -1]

    # Build the output char array
    for i in range(len(arr)):
        output[count[ord(arr[i])] - 1] = arr[i]
        count[ord(arr[i])] -= 1

    for i in range(len(arr)):
        ans[i] = output[i]
    return ans

# Driver program
arr = "preetisoni"
ans = countSort(arr)
print("Sorted character string: % s" %("".join(ans)))


    

    