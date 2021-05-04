
#include <iostream>

void merge(char arr[], int low, int middle, int high)
{
    if(high <= low)
        return;
    int n1 = middle - low + 1;
    int n2 = high - middle;

    char *L = new char [n1];
    char *R = new char [n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[low + i];

    for(int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

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
        arr[k] = L[i];
        i++; k++;
    }

    while(j < n2)
    {
        arr[k] = R[j];
        j++; k++;
    }
}


void mergeSort(char arr[], int low, int high)
{
    if(low >= high)
        return;
    int middle = low + (high - low)/2;
    mergeSort(arr, low, middle);
    mergeSort(arr, middle + 1, high);
    merge(arr, low, middle, high);

}

int main()
{
    char arr[] = {'y', 'e', 'n', 'b', 'z'};
    mergeSort(arr, 0, 4);

    for(int i = 0; i <= 4; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    return 0;
}