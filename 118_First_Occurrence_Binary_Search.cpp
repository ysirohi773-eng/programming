#include <iostream>
#include <vector>
using namespace std;
int binarysearch (vector <int> &v,int target)
{
    int left = 0;
    int right = v.size()-1;
    int ans = -1;
    while (left <= right)
    {
    
     int mid = (left + right) / 2;

    if (v[mid]==target)
    {
        ans = mid;
        right = mid - 1;

    }

    else if (v[mid]>target)
    {
        right = mid - 1;
    }

    else 
    {
        left = mid + 1;
    }
}
     return ans;
}
int main ()
{
   vector <int> v = {1,2,2,2,3,3,3,4,4,4,5,5,5};
   int target = 5;

   cout << binarysearch (v,target);

   return 0;
}
