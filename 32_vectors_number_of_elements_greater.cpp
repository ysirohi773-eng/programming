#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int>v ={2,6,13,6,10,7,12,6,9};
   int x=6;
   int count=0;
   for(int i=0;i<v.size();i++)
   {
    if (v[i]>x)
    {
        count++;
    }
    }

    cout<<"number of elements  greater then:"<<count;

    return 0;
}
