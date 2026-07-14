#include <iostream>
using namespace std;
int fun (int n )
{
    if (n==0)
    return 0;

    if(n%2==0)
    {
        return -n+fun(n-1);
    }
    
    else
    {
        return +n+fun(n-1);
    }

    
}
int main()
{
    int n = 5;
    

    cout << fun(5);

    return 0;
}