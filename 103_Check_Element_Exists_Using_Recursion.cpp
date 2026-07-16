#include <iostream>
using namespace std;

bool fun (int *arr, int idx, int n, int a)
{
   if (idx==n)
   return false;
   
   if (arr[idx]==a)
   {
    return true;
   }

    return fun (arr, idx+1, n ,a);
}

int main ()
{
    int n = 5;
   int arr [] = {2,4,5,7,9};
   int a = 0;
    cout << fun (arr, 0, n, a);
   return 0;
   
}
