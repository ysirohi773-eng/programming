#include <iostream>
using namespace std;
int main()
{

int arr[3][4] =
{
    {12, 45, 7, 18},
    {9, 33, 25, 1},
    {60, 14, 29, 8}
};
int element;
bool found = false;
    cin>>element;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(element==arr[i][j])
            {
                
                found = true;
                break;
            }
            
        }
        if(found)
        {
            break;              // Outer loop also stops
        }
    }
    if(found)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}
