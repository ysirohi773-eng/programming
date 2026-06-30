#include <iostream>
using namespace std;
int main()
{

int arr[3][4] =
{
    {12, 45, 7, 1},
    {9, 33, 25, 3},
    {60, 14, 29, 5}
};
 for (int i =0; i<4;i++)
 {
    for(int j=0;j<3;j++)
    {
        
        cout << arr[j][i] << " ";

    }
    cout << endl;
 }


return 0;
}