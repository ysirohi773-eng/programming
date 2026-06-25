#include<iostream>
#include <vector>
using namespace std;
int main()
{
     vector<int>v={2,4,5,6,15};
     cout<<v.empty()<<endl;
    cout<<"size ="<<v.size()<<endl;
    cout<<"capacity="<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }


    return 0;
}