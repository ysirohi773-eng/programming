#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int>v={2,5,6,10,7};
   v.pop_back();


   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }
   
   
   
   
   
    return 0;
}