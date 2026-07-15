#include <iostream>
using namespace std;

int gcd (int n , int a)
{
    if(a==0)
    return n;
     
 
     return gcd (a,n%a);
}
int main ()
{
    int n = 20;
    int a = 12;
   
    cout << gcd (n,a);
    
}