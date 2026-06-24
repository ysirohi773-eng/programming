#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int>v={1,3,5,8,9,13};
  bool sorted=true;
  for(int i=1;i<v.size();i++)
   {
    if (v[i]<v[i-1])
    {
        sorted=false;
        break;
    }
    }
    if(sorted)
    {
        cout<<"sorted";
    }
    else
    cout<<"not sorted";



    return 0;
}