#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *p = arr;

    cout << "Address stored in p        : " << p << endl;
    cout << "Value at p                : " << *p << endl;

    cout << "\nAfter p + 1" << endl;
    cout << "Address                  : " << p + 1 << endl;
    cout << "Value                    : " << *(p + 1) << endl;

    cout << "\nAfter p + 2" << endl;
    cout << "Address                  : " << p + 2 << endl;
    cout << "Value                    : " << *(p + 2) << endl;

    cout << "\nUsing p++" << endl;

    p++;

    cout << "Address                  : " << p << endl;
    cout << "Value                    : " << *p << endl;

    p++;

    cout << "\nAfter another p++" << endl;
    cout << "Address                  : " << p << endl;
    cout << "Value                    : " << *p << endl;

    p--;

    cout << "\nAfter p--" << endl;
    cout << "Address                  : " << p << endl;
    cout << "Value                    : " << *p << endl;

    return 0;
}