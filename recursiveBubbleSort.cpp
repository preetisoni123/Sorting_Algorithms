#include <iostream>
#include <vector>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp; 
}

template <typename T>
void recursiveBubbleSort(std::vector<T> &arr, int size)
{
    if(size == 1)
        return;
    bool swap_flag = false;
    for(int i = 0; i < size - 1; i++)
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
            swap_flag = true;
        }
    if(swap_flag)
        recursiveBubbleSort(arr, size -1);

    return;
}

int main()
{
    std::vector<char> arr = {'d', 'e', 'n', 'b', 'z'};
    recursiveBubbleSort(arr, arr.size());

    auto printArr = [&](){
        for(auto i: arr)
            std::cout << i << " ";
        std::cout << std::endl;
    };

    printArr();
    return 0;
}