#include <iostream>
using namespace std;
int main() {
  int a;
   cout<< "ENTER MARKS";
   cin>>a;
   if (a>55)
    {
        if(a>90)
        { 
            cout<<"GRADE A";
        } 
        
        if(a>75&&a<90)
        {
            cout<<"GRADE B";
        }
        if(a>65&&a<75)
        {
            cout<<"GRADE C";
        }
        if(a>55&&a<65)
        {
            cout<<"GRADE D";
        }

    }
    else
    {
        cout<<" /nNOT ELIGIABLE";
    }
  
    return 0; 
}