#include <iostream>
using namespace std;

class Bankaccount {
    
    private :
           int balance = 0;

    public :
    
         void deposit (int amount)
         {
            balance += amount;
         }

         int getbalance ()
         {
            return balance;
         }

};

int main ()
{
    Bankaccount account;
    account.deposit(500);

    cout <<"Balance "<<account.getbalance()<<endl;
    return 0;

}