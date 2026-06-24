#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(12);
    v.push_back(1);
    v.push_back(5);
    v.push_back(42);
    v.push_back(34);

    for(int i=0;i<v.size();i++)
    {
         cout<<v[i]<<" ";
    }
    v.erase(v.begin()+2,v.begin()+3);

    for(int i=0;i<v.size();i++)
    {
         cout<<v[i]<<" "<<endl;
    }
    



    return 0;
}