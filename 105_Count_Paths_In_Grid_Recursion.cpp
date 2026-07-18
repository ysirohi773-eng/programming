#include <iostream>
using namespace std;

int countPath(int i, int j, int m, int n)
{
    // Destination
    if(i == m-1 && j == n-1)
        return 1;

    // Out of Grid
    if(i >= m || j >= n)
        return 0;

    int right = countPath(i, j+1, m, n);
    int down = countPath(i+1, j, m, n);

    return right + down;
}

int main()
{
    int m = 2, n = 3;

    cout << countPath(0, 0, m, n);

    return 0;
}