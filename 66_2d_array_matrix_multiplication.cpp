#include <iostream>
using namespace std;
int main ()
{
    int arr_1[2][3] =
{
    {12, 45, 7},
    {9, 33, 25}
};

int arr_2[3][2]=
{
    {1  , 2},
    {3  , 4},
    {5  , 6}
};
int arr_12[2][2];

for (int i= 0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        int sum=0;
        
         for(int k = 0; k < 3; k++)
         {
            sum+=arr_1[i][k] * arr_2[k][j];
         }
         
            arr_12[i][j]=sum;

           
          
    }
}



return 0;
}