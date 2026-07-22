#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int>v={2,7,9,0,1};
   int n = v.size();
   for(int i = 0;i < n-1;i++)
   {
     int minIndex = i;

     for(int j = i+1;j < n;j++)
     {
        if(v[j]<v[minIndex])
        {
           minIndex=j;
        }
        
    }
    if(i!=minIndex)
        {
          swap(v[i],v[minIndex]);
        }
    }
        for(int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }
   
   return 0;
}