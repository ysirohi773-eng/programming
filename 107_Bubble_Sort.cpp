#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int>v = {2,8,6,9,3};
    int n = v.size();
     
    for (int i = 0;i < n-1;i++)
    {
        for (int j = 0;j < n-i-1;j++)
        {
          if(v[j]>v[j+1])
          {
            swap (v[j+1],v[j]);

          }  
         
        
        }
    }


    for(int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }

    return 0;


}