#include <iostream>
using namespace std;
int main()
{
int arr[]={9,7,5,4,23,6,74,32,34};
int count=0;

for (int i=0;i<9;i++)
{
    if (arr[i]%2!=0)
    {
        cout<<arr[i]<<endl;
        count++;
    }
}
cout<<count<<" ";



    return 0;
}