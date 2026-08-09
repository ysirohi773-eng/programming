#include <iostream>
#include <vector>
using namespace std;

int findMinIndex(vector<int> & v)
{
   if (v.size() == 1) return 0;
   int low = 0 , high = v.size()-1;
   if(v[low] < v[high])
   {
      return low;
   }

   while (low <= high)
   {
     int mid = (low + high) / 2;
      if (mid < high && v[mid] > v[mid + 1])
            return mid + 1;

        if (mid > low && v[mid] < v[mid - 1])
            return mid;

     if(v[mid] > v[low])
     {
        low = mid + 1;
     }
     else
     {
        high = mid - 1;
     }
   }
   return -1;
}

int main()
{
   int n;
   cin >> n;
   vector <int> v;

   for (int i = 0;i < n;i++) {
    int x;
    cin >> x;
    v.push_back(x);
   }
   cout << findMinIndex(v);

    return 0;
   
}