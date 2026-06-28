#include <iostream>
#include <vector>
using namespace std;
int main ()
{
   vector<int>v={4,-2,7,-5,0,-8,6};
   int left= 0;
   int right= v.size()-1;

   while(left<right)
   {
    if (v[left]<0)
    {
        left++;
    }
    else if (v[right]>=0)
    {
        right--;
    }
     else
     {
        swap(v[left],v[right]);
        left++;
        right--;
     }
   }
    for(int k = 0; k < v.size(); k++)
{
    cout << v[k] << " ";
}

    return 0;
}