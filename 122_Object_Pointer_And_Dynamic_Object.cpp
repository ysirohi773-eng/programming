#include <iostream>
#include <string>
using namespace std;

// Understanding objects, object pointers, new, delete, . and -> operators

class Fruit
{
public:
    string name;
    string color;
};

int main()
{
    // Normal object
    Fruit apple;

    apple.name = "Apple";
    apple.color = "Red";

    cout << apple.name << " - " << apple.color << endl;


    // Pointer to dynamically created object
    Fruit *mango = new Fruit();

    mango->name = "Mango";
    mango->color = "Yellow";

    cout << mango->name << " - " << mango->color << endl;


    // Release dynamically allocated memory
    delete mango;

    return 0;
}