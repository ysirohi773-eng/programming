#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Your name is: " << name << endl;
    cout << "Length of name: " << name.length() << endl;

    return 0;
}