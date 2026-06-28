#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>v={1,0,1,0,0,1};

  
   int left = 0;
   int right = v.size()-1;
   
   while(left<right)
   {
       if(v[left] == 0)
{
    left++;
}
else if(v[right] == 1)
{
    right--;
}
else
{
    swap(v[left], v[right]);
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


