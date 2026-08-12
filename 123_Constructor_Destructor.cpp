#include <iostream>
#include <string>
using namespace std;

class students
{
    public:
            string name;
            int roll_num;

            //constructor
            students(string a,int n)
            {
                name = a;
                roll_num = n;

                cout << "constructor called for" << endl;
            }

            //Destructor
            ~students()
            {
                cout << "destructor" <<" "<< name ;
            }

            void display()
            {
                cout << "name" <<" "<< name << endl;
                cout << "roll no" <<" "<< roll_num << endl;
            }


};

int main()
{
    students s1("Yash",31);

    s1.display();

    return 0;

}