#include <iostream>
using namespace std;

class Animal {
        public:
             virtual void Sound()
             {
                cout << "animal make a sound";
             }
};

class Dog : public Animal {
        public:
                void Sound() override 
                {
                     cout << " DOG bark" <<endl;
                }
                
};

class Cat : public Animal {
    public: 
            void Sound() override
            {
                cout << "cat meow" <<endl;
            }
};


int main ()
{
     Dog d;
     Cat c;

     d.Sound();
     c.Sound();

     return 0;
} 
