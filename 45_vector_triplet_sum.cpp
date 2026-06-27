#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int>v={1,2,3,4,5,6};
   int target =10;
   for(int i=0;i<v.size();i++)

   {
        for(int j=i+1 ;j<v.size();j++)
       {
              for(int k =j+2;k<v.size();k++)
              {
                if(v[i]+v[j]+v[k]==target)
                  {
                    cout<<v[i]<<" "
                        <<v[j]<<" "
                        <<v[k]<<endl;
                  }
              }
        }
   }







   return 0; 
}