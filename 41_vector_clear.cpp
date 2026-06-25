#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int>v={2,6,12,14,56,};
   v.clear();
   
    cout<<"size ="<<v.size()<<endl;
    cout<<"capacity="<<v.capacity()<<endl;



   return 0; 
}