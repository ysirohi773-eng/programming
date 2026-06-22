#include <iostream>
using namespace std;
int main ()
{
int arr[]={23,45,12,77,45,88};
int min=arr[0];
for (int i=1;i<6;i++)
{
    if (arr[i]<min)
    {
        min=arr[i];
    }
}
   cout<<min;




    return 0;
}

