#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {                           // Time Complexity: O(n^2)
        for(int j=0;j<n;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }

    return 0;
}