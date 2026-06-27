#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int>v={3,4,6,7,1};

   for(int i=0;i<v.size();i++)
   {
     for(int j=i+1;j<v.size();i++)
     {
       if(v[i]+v[j]==7) 
       {
        cout<<v[i]<<" "<<v[j];
       }
       
     }

     
   }





    return 0;
}