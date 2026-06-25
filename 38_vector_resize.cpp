#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int>v={2,10,7,5};
    v.resize(9,22);
    cout<<"size ="<<v.size()<<endl;
    cout<<"capacity="<<v.capacity()<<endl;

     for(int i=0;i<9;i++)
     {
        cout<<v[i]<<endl;
     }



    return 0;
}