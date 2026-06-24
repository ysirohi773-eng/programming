#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>vec={2,6,13,6,10,7,12,6,9};
    int x=6;
    int last = -1;
    
    
         for(int i=0;i<vec.size();i++)
    {
        if (vec[i]==x)
        {
            last=i;
        }
    }
    
    
    cout<<"last occurrence ="<<last;




    return 0;
}