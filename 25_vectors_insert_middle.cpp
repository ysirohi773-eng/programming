#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v={14,5,0,9,5,33,7,8,4};
    v.insert(v.begin()+7,55);



     for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }
   

    
    
    
    return 0;
}