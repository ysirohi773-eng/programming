#include <iostream>
#include <algorithm>
using namespace std;

  
int partition(int *arr,int left,int right)
{
    int j = left;
    int i = left-1;
    int piovt = arr[right];
    
    for(int j = left;j<right;j++)
    {
        if(arr[j]<piovt)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
      swap(arr[i+1],arr[right]);
      return i+1;
}
void quicksort(int *arr,int left,int right)
{
  if(left>=right){
   return;
  }

  int pi = partition(arr,left,right);
  quicksort(arr,left,pi-1);
  quicksort(arr,pi+1,right);

}
int main ()
{
    int arr[] = {2,4,9,0,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);

    for(int k = 0;k < n;k++)
    {
        cout << arr[k]<<" ";

    }

    return 0;

}