#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v={0,9,8,7,6,5,4};
    int left=0;
    int right=v.size()-1;
    while(left < right)
    {
        swap(v[left],v[right]);
        left++;
        right--;

    }
    cout<<" reversed vector " ;
    for (int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }



    return 0;
}