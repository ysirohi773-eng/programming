#include <iostream>
#include <cmath>
using namespace std;

// Total digits count
int countDigits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

// Armstrong sum
int armstrongSum(int n, int digits)
{
    if (n == 0)
        return 0;

    int lastDigit = n % 10;

    return pow(lastDigit, digits) + armstrongSum(n / 10, digits);
}

int main()
{
    int n = 153;

    int digits = countDigits(n);

    if (armstrongSum(n, digits) == n)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}