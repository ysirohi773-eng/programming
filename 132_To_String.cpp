#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age = 15;
    int marks = 95;

    string ageText = to_string(age);
    string marksText = to_string(marks);

    cout << "Age: " << ageText << endl;
    cout << "Marks: " << marksText << endl;

    string message = "I am " + to_string(age) + " years old.";

    cout << message << endl;

    return 0;
}