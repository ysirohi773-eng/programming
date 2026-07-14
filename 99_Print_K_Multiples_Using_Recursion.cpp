#include <iostream>
using namespace std;

void fun(int n,int k)
{
    if(k==0)
    return ;

      fun (n,k-1);
      cout << n*k <<" ";

}

int main ()
{
     int n = 12;
     int k = 5;
     fun(12,5);
     return 0;
}

