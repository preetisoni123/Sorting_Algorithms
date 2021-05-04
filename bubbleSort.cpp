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
void bubbleSort(std::vector<T> &arr)
{
    size_t size = arr.size();

    // Come out of the loop, if there are no swap for the entire round
    bool swap_flag;
    for(int i = 0; i < size -1; i++)
    {
        swap_flag = false;
        for(int j = 0; j < size - i -1; j++)
        if(arr[j] > arr[j + 1])
        {
            swap_flag = true;
            swap(arr[j], arr[j+1]);
        }
        if(!swap_flag)
            break;
    }
}

int main()
{
    std::vector<char> arr = {'d', 'e', 'n', 'b', 'z'};
    bubbleSort(arr);

    auto printArr = [&](){
        for(auto i: arr)
            std::cout << i << " ";
        std::cout << std::endl;
    };

    printArr();
    return 0;
}