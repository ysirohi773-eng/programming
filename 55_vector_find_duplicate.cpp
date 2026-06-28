#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int> v = {1,3,4,2,2};

    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j])
            {
               cout<<v[i];
               break;

            }
            
                   }
    }
 
     

    return 0;
}