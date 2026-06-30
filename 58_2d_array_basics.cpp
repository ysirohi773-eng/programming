#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];

    cout << "Enter 12 elements:" << endl;

    // Input
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nMatrix is:\n";

    // Output
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}