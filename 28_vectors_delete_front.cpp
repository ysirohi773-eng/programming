#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int>v={2,4,5,6,7};
    v.erase(v.begin());

    for(int i=0;i<v.size();i++)
    {
         cout<<v[i]<<" ";
    }
    
    
    
    return 0;
}