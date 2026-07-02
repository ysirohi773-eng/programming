#include <iostream>
using namespace std;
int main ()
{
int arr[5][5]={
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25}
};

int top = 0;
int bottom = 4;
int left = 0;
int right = 4;
while (top <= bottom && left <= right)
      {

         for (int j = left; j <= right; j++)
{
    cout << arr[top][j] << " ";
}
top++;
for (int i = top; i <= bottom; i++)
{
    cout << arr[i][right] << " ";
}
right--;
if(top <= bottom)
{
for (int j = right; j >= left; j--)
{
    cout << arr[bottom][j] << " ";
}
bottom--;
}
if(left <= right)
{
for (int i = bottom; i >= top; i--)
{
    cout << arr[i][left] << " ";
}
left++;
}

      }

    return 0;
}