#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int>v={2,10,7,5};
    cout<<"Front = "<<v.front()<<endl;
    cout<<"Back = "<<v.back()<<endl;
    cout<<"size ="<<v.size()<<endl;
    cout<<"capacity="<<v.capacity()<<endl;

     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<endl;
     }



    return 0;
}