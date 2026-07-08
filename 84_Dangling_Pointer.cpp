#include <iostream>
using namespace std;

int main()
{
    int *p = new int;     // Dangling pointer 

    *p = 50;

    cout << *p << endl;

    delete p;

    cout << *p << endl;   // ❌ Dangerous

    return 0;
}