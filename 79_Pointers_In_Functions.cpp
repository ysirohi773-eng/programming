#include <iostream>
using namespace std;
void update (int a)
{
    a = 11;     // Pass by Value  
} 
int main ()
{
    int x = 100;
    update(x);

    cout << x <<" ";
}




