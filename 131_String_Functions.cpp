#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string s = "HelloWorld";

    // 1. size()
    cout << "Size: " << s.size() << endl;

    // 2. reverse()
    reverse(s.begin(), s.end());
    cout << "Reverse: " << s << endl;

    // 3. substr()
    string part = s.substr(0, 5);
    cout << "Substring: " << part << endl;

    // 4. + operator
    string first = "Hello";
    string second = "World";
    string full = first + " " + second;
    cout << "Using + : " << full << endl;

    // 5. push_back()
    full.push_back('!');
    cout << "After push_back: " << full << endl;

    // 6. strcat()
    char a[30] = "Hello ";
    char b[] = "C++";

    strcat(a, b);

    cout << "Using strcat: " << a << endl;

    return 0;
}