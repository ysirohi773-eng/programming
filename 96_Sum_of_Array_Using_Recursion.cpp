#include <iostream>
using namespace std;

int fun(int *arr,int idx, int n)
{
if (idx==n-1)

    return arr[idx];
      
    int ans = fun(arr,idx+1,n);
     return arr[idx]+ans;
}

int main()
{
  int arr[] ={2,4,13,9,10};
  int n = 5;

 cout << fun(arr, 0, n);

  
  return 0;
}