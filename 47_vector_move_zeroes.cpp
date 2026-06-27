#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<int>v={0,0,5,0,8};

 int i = 0;
 for(int j=0;j<v.size();j++)
 {
    if (v[j]!=0)
    {
      swap(v[i],v[j]);  
      i++;
    }
}
    for(int k = 0; k < v.size(); k++)
{
    cout << v[k] << " ";
}
    

 
 


    return 0;
}