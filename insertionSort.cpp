#include <iostream>
#include <vector>


template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp; 
}

template<typename T>
void insertionSort(std::vector<T> &arr)
{
    size_t size = arr.size();
    T key;

    for(int i = 1; i < size; i++)
    {
        key = arr[i];
        int j = i -1;
        // Move elements of arr[0..n-1] that are greater 
        // than key, one position ahead of their current
        // position 
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    std::vector<char> arr = {'d', 'e', 'n', 'b', 'z'};
    insertionSort(arr);

    auto printArr = [&](){
        for(auto i: arr)
            std::cout << i << " ";
        std::cout << std::endl;
    };

    printArr();
    return 0;
}