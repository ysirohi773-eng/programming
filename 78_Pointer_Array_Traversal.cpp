#include <iostream>
using namespace std;
int main ()
{

    int arr [] = {1,3,5,2,9,0,1};
    int *ptr = arr;

    for (int i = 0; i < 7; i++ )
    {
        cout << *(ptr+i)<<" ";
    }




    return 0;
} 