#include <iostream>
using namespace std;

bool f(int num, int *temp)
{
    // Base Case
    if (num >= 0 && num <= 9)
    {
        bool ans = (num == (*temp) % 10);
        (*temp) /= 10;
        return ans;
    }

    bool result = f(num / 10, temp) &&
                  ((num % 10) == ((*temp) % 10));

    (*temp) /= 10;

    return result;
}

int main()
{
    int num = 12621;
    int anotherNum = num;
    int *temp = &anotherNum;

    bool ans = f(num, temp);

    if (ans)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}