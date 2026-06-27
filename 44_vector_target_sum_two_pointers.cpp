#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,6,7}; 
    int target = 7;
    

    for(int left = 0, right =v.size()-1;left<right;)
    {
      int sum =v[left]+v[right];

      if(sum == target)
      {
          cout << "Pair: " << v[left] << " " << v[right] << endl;
          break;

      }
      else if(sum<target)
      {
        left++;
      }
      else 
      {
        right--;
      }
    }








    return 0;
}