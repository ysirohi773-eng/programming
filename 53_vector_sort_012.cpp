#include <iostream>
#include <vector>
using namespace std;
int main ()
{
   vector<int>v={2,0,1,2,1,0};
   int low=0;
   int mid=0;
   int high=v.size()-1;
   while(mid<=high)
   {
    if(v[mid]==0)
    {
        swap(v[low],v[mid]);
        low ++;
        mid ++;
    }
    else if(v[mid]==2)
    {
        swap(v[mid],v[high]);
        high --;
        }
    else
      {
         mid++;
      }

   }
    for(int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }


     return 0;
}