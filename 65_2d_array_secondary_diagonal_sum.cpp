#include <iostream>
using namespace std;
int main ()
{
    int arr[3][3] =
{
    {12, 45, 7},
    {9, 33, 25},
    {60, 14, 29}
};
int sum =0;

for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i+j==2)
            {
              sum+=arr[i][j];
            }
        }
    }

cout << "Primary Diagonal Sum = " << sum << endl;








return 0;

}