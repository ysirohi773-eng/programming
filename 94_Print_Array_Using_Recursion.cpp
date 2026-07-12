#include <iostream>
using namespace std;

void fun(int *arr,int idx,int n)
{
    if (idx==n)
    return;
    
    cout << arr[idx] <<endl;
    fun( arr, idx+1,n);
}

int main()
{
    int n = 5;
    int arr[]={2,4,7,12,8};
    fun(arr,0,n);
    return 0;

}
