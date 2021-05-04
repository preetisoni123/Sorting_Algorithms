def pigeonholeSort(a):
    my_min = min(a)
    my_max = max(a)
    size = my_max - my_min + 1

    # List of pigeonholes
    holes = [0] * size

    # Populate pigenholes
    for x in a:
        assert type(x) is int, "Please give integer only"
        holes[x - my_min] += 1

    # Put the element back into the array in order
    i = 0
    for count in range(size):
        while holes[count] > 0:
            holes[count] -= 1
            a[i] = count + my_min
            i += 1
    
a = [8, 9, 2, 6, 3, 5]
pigeonholeSort(a)

print("Sorted array: ", end = " ")
for i in range(len(a)):
    print(a[i], end = " ")

