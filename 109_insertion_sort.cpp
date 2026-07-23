#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v)
{
   int n = v.size();
   for (int i = 1;i < n;i++)
   {
     int current = v[i];
     int j = i-1;

     while ( j >= 0 && current < v[j])
     { 

        v[j+1]= v[j];
       j--;
     }
     v[j + 1] = current;

   }
}

int main ()
{
    vector<int>v = {3,5,2,1,9};
     sort(v);
     for(int x : v)
{
    cout << x << " ";
}
     return 0;
}
