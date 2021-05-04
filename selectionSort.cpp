#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
void selectionSort(std::vector<T> &arr, int size)
{
    int minIdx;
    for(int i = 0; i < size-1; i++)
    {
        minIdx = i;
        // Find index of minimum element in the array
        for(int j = i+1; j < size; j++)
            if(arr[j] < arr[minIdx])
                minIdx = j;
        if(minIdx != i)
            swap(arr[i], arr[minIdx]);

    }
}
int main()
{
    std::vector<int> arr = {10, 5, 2, 23, 4, 6};
    int size = arr.size();
    selectionSort(arr, size);

    std::for_each(arr.begin(), arr.end(), [&](int const & i){std::cout << i << " "; });
    std::cout << std::endl;
    return 0;
}