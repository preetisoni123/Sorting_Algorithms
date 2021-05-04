
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
//template <typename T>
//void merge(std::vector<T> &arr, int low, int middle, int high)
void merge(char arr[], int low, int middle, int high)
{
    if(high <= low)
        return;
    int n1 = middle - low + 1;
    int n2 = high - middle;

    //std::vector<T> L(arr[low], arr[middle]);
    //std::vector<T> R(arr[middle + 1], arr[high+1]);
    char *L = new char [n1];
    char *R = new char [n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[low + i];

    for(int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    //char L[] = (arr[low], arr[middle]);
    //std::vector<T> R(arr[middle + 1], arr[high+1]);

    //std::cout << "Before: " << low << " " << middle << " " << high << " :";
    for(int i = low; i <= high; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    int i = 0, j = 0;
    int k = low;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        //std::cout << arr[k] <<  " " << L[j] << "\n";
        arr[k] = L[i];
        i++; k++;
    }

    while(j < n2)
    {
        //std::cout << arr[k] <<  " " << L[j] << "\n";
        arr[k] = R[j];
        j++; k++;
    }

    std::cout << "After: ";
    for(int i = low; i <= high; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}


// Quick sort:
//template <typename T>
//void mergeSort(std::vector<T> &arr, int low, int high)
void mergeSort(char arr[], int low, int high)
{
    std::cout << "Before: " << low << " " << " " << high << " :";
    if(low >= high)
        return;
/*    std::cout << "MergeSort: ";
    for(int i = low; i < high; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
*/
    int middle = low + (high - low)/2;
    mergeSort(arr, low, middle);
    mergeSort(arr, middle + 1, high);
    merge(arr, low, middle, high);

//    return;
}




int main()
{
    //std::vector<char> arr = {'d', 'e', 'n', 'b', 'z'};
    char arr[] = {'y', 'e', 'n', 'b', 'z'};
    //std::cout << arr.size() << "\n";
    //mergeSort(arr, 0, arr.size());
    mergeSort(arr, 0, 4);

    //std::cout << "Array size : " << arr.size() << "\n";
/*    auto printArr = [&](){
        for(auto i: arr)
            std::cout << i << " ";
        std::cout << std::endl;
    };

    printArr();*/

    std::cout << "done: ";
    for(int i = 0; i <= 4; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}