#include <iostream>
using namespace std;

int fun(int n)
{
    if(n==0)
    return 0;

    
    return (n % 10)+fun(n/10);
}

int main()
{
    
    cout << fun(98435)<<" ";
    return 0;
}