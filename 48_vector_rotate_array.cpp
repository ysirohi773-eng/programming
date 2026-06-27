#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,6,7};
    int k =3;
    int left = 0;
    int right = v.size()-1;

    while(left < right)
    {
         swap(v[left],v[right]);
        left++;
        right--;
    }
   while (v.size()-2<v.size())
   {
    swap(v[5],v[6]);
   }
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }
   
   
    return 0;
}