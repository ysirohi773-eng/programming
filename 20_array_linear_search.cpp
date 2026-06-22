#include <iostream>
using namespace std;
int main() 
{
int arr[]={2,88,1,16,98,66,43};
int key;
cin>>key;
int found=0;
for (int i=0;i<7;i++)
{
    if (arr[i]==key)
    {
        found=1;
        break;
    
     }
    }
     if(found==1)
     {
        cout<<"found";
     }

    else {
        cout<<"not found";
    }

cout<<key;


    return 0;
}