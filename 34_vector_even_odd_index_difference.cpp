#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v={10,29,4,55,3,88,9,7};
    int evensum=0;
    int oddsum=0;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
           evensum=evensum+v[i];
        }
        else
        {
            oddsum=oddsum+v[i];
        }

    }
    cout<<"even index sum"<<evensum<<endl;
    cout<<"odd index sum"<<oddsum<<endl;
    cout<<"difference of index sum"<<evensum -oddsum;


    return 0;
}