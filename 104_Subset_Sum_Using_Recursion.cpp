#include<iostream>
using namespace std;

void subsetSum(int arr[], int idx, int n, int sum)
{
    if(idx == n)
    {
        cout << sum << " ";
        return;
    }

    // Take
    subsetSum(arr, idx+1, n, sum + arr[idx]);

    // Not Take
    subsetSum(arr, idx+1, n, sum);
}

int main()
{
    int arr[] = {2,4,5};

    int n = 3;

    subsetSum(arr,0,n,0);

    return 0;
}