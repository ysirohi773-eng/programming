#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int>v={2,10,7,5};
    v.reserve(9);
    cout<<"size ="<<v.size()<<endl;
    cout<<"capacity="<<v.capacity()<<endl;





    return 0;
}