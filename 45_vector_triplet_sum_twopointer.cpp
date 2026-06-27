#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int>v={1,2,3,4,5,6};
   int target =10;

   for(int i=0;i<v.size()-2;i++)
   {
    int left = i+1;
   int right = v.size()-1;
   while(left < right)
   {
       int sum = v[i]+v[left]+v[right];


       if (sum==target )
       {
        cout<<v[i]<<" "
            <<v[left]<<" "
            <<v[right]<<endl;
            left++;
            right--;
       }
       else if(sum < target)
       {
          left++;
       }
       else
       {
        right--;
       }

   }



   }


   return 0; 
}