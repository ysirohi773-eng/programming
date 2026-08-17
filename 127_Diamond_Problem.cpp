#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "This is A" << endl;
    }
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;

    // obj.show();   // ERROR: Ambiguous

    obj.B::show();
    obj.C::show();

    return 0;
}