#include <iostream>
#include <vector>
using namespace std;
int main ()
{
   vector<int>v={1,3,4,5};
   
   int sum = 0;
   int totalsum =0 ;
   int n=5;

   for(int i=0;i<v.size();i++)
   {
     sum = sum + v[i];
   }
    
    totalsum=n * (n + 1)/2;

    n=totalsum-sum;
    cout<<n;





    return 0;
}