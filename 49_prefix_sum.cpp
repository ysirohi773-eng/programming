#include <iostream>
#include <vector>
using namespace std;
int main ()
{
     vector<int>v={2,4,6,8,10};
     
         for(int i = 0;i<v.size();i++)
     {
           v[i] = v[i-1] + v[i];

     }
     for (int i = 0;i<v.size();i++)

     {
         cout<<v[i]<<" ";
     }

    
    return 0;
}