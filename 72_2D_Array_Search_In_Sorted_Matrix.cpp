#include <iostream>
using namespace std;
int main ()
{
int arr[5][5] =
{
    {1, 4, 7, 11, 15},
    {2, 5, 8, 12, 19},
    {3, 6, 9, 16, 22},
    {10, 13, 14, 17, 24},
    {18, 21, 23, 26, 30}
};
int target = 23;
int row = 0;
int coloum = 4;

  while(row < 5 && coloum >= 0)
  {
    if(target == arr[row][coloum])
    {
      cout << "TRUE";  
      
      break;

    }
      else if (arr[row][coloum] > target)
    {
       coloum--;
    }
    else 
    {
       
        row++;
    }

  }
    

    return 0;
}
