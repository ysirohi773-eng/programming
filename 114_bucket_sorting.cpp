#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(int arr[], int n)
{
    // Create 10 buckets
    vector<int> bucket[10];

    // Put elements into buckets
    for (int i = 0; i < n; i++)
    {
        int bucketIndex = arr[i] / 10;
        bucket[bucketIndex].push_back(arr[i]);
    }

    // Sort each bucket
    for (int i = 0; i < 10; i++)
    {
        sort(bucket[i].begin(), bucket[i].end());
    }

    // Merge buckets back into original array
    int index = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            arr[index] = bucket[i][j];
            index++;
        }
    }
}

int main()
{
    int arr[] = {29, 25, 3, 49, 9, 37, 21, 43};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}