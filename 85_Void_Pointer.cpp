#include <iostream>
using namespace std;
int main () {

    int a = 10;

void *p = &a;

cout << *(int*)p;

return 0;

}