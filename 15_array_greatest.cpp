#include <iostream>
using namespace std;
int main()
{
int arr[]={2,8,5,10,3};
int max=arr[0];
for (int i=1;i<5;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
}
cout<<max;

    return 0;
}