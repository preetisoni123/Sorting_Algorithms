#include <iostream>
#include <vector>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp; 
}

// Partition for quick sort
template <typename T>
int partition(std::vector<T> &arr, int low, int high)
{
    T pivot = arr[high];
    int i = low - 1; 
    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            if(i != j)
               swap(arr[i], arr[j]);
        }

    }
    if(i + 1 != high)
        swap(arr[i+1], arr[high]);
    return i + 1;
}

// Quick sort:
template <typename T>
void quickSort(std::vector<T> &arr, int low, int high)
{
    int pi; // Partition index
    if(low < high)
    {
        pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}




int main()
{
    std::vector<char> arr = {'d', 'e', 'n', 'b', 'z'};
    quickSort(arr, 0, arr.size() - 1);

    auto printArr = [&](){
        for(auto i: arr)
            std::cout << i << " ";
        std::cout << std::endl;
    };

    printArr();
    return 0;
}