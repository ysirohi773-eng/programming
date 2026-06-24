#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int>v={12,40,28,10,60};
    v.insert(v.begin(),10);

    for(int i=0;i<v.size();i++)
    {
         cout<<v[i]<<" ";
    }



    return 0;
}
