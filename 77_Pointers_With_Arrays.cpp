#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6,7,1,4,4,5};
    int *ptr = arr;

    *(ptr + 1) = *ptr + *ptr + 3;

    cout << arr[1] << endl;

    return 0;
}