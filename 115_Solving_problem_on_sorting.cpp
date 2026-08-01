#include <iostream>
using namespace std;

int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for(int j = left; j < right; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[right]);

    return i + 1;
}

void quickSort(int arr[], int left, int right)
{
    if(left >= right)
        return;

    int pi = partition(arr, left, right);

    quickSort(arr, left, pi - 1);
    quickSort(arr, pi + 1, right);
}

int main()
{
    int arr[] = {3,5,2,1,4,7,8,6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 5;

    quickSort(arr, 0, n - 1);

    cout << k << "th smallest element = " << arr[k - 1];

    return 0;
}