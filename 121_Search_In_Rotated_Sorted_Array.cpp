#include <iostream>
#include <vector>
using namespace std;
int fun(vector<int> &v,int target)
{
    int left = 0;
    int right = v.size() - 1;

    while (left <= right)
    {
      int mid =  (left + right)/2;
    
    if (v[mid]== target) return mid;
    if (v[left]<=v[mid])
    {
       if (v[left] <= target && target < v[mid])
       {
        right = mid - 1;
       }
       else 
       {
        left = mid + 1;
       }

    
    }
    else {
        if (v[mid] < target && target <= v[right])
        {
        left = mid + 1;
        }
        else
        {
        right = mid - 1;
        }
        }

    }
    return -1;
    }

    int main ()
    {
      vector<int> v = {4, 5, 7, 8, 9, 1, 2, 3};

      cout << fun(v,9);
      return 0;

    }




