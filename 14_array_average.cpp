#include <iostream>
using namespace std;
int main()
{
int arr[]={6,4,7,3,1};
int sum=0;
for (int i=0;i<5;i++)
{
    sum=sum+arr[i];
}
double avg;
 avg = sum/5;
 cout<<avg;

    return 0;
}