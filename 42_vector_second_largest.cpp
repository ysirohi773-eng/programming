#include <iostream>
#include <vector>
using namespace std;
int main ()
{
vector<int>v={2,4,10,16,17};
int largest=-1;
int secondlargest=-1;

for(int i=0;i<v.size();i++)
{
    if(v[i]>largest)
    {
        secondlargest = largest;
        largest = v[i];
    }
    else if(v[i]>secondlargest && v[i] < largest)
    {
         secondlargest=v[i];
    }
}

cout<< "largest = "<<largest<<endl;

cout<<"secondlargest = "<<secondlargest<<endl;





    return 0;
}