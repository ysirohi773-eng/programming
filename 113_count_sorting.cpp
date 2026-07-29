#include <iostream>
#include <vector>
using namespace std;

void countSort(int arr[], int n)
{
    int maxElement = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > maxElement)
            maxElement = arr[i];
    }

    vector<int> count(maxElement + 1, 0);

    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    int index = 0;

    for(int i = 0; i <= maxElement; i++)
    {
        while(count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    countSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}