#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // Copy left array
    int k = start;
    for(int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    // Copy right array
    k = mid + 1;
    for(int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // Merge two sorted arrays
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;

    while(leftIndex < len1 && rightIndex < len2)
    {
        if(left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex] = left[leftIndex];
            leftIndex++;
        }
        else
        {
            arr[mainArrayIndex] = right[rightIndex];
            rightIndex++;
        }
        mainArrayIndex++;
    }

    while(leftIndex < len1)
    {
        arr[mainArrayIndex] = left[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }

    while(rightIndex < len2)
    {
        arr[mainArrayIndex] = right[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);

    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {8, 3, 5, 4, 7, 6, 1, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}