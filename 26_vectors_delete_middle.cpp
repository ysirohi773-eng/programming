#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int>v={2,3,15,27,8,7};
   v.erase(v.begin()+4);
   
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }





    return 0;
}