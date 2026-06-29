#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {2, 3, 6, 7};

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < A.size() && j < B.size())
    {
        if(A[i] < B[j])
        {
            ans.push_back(A[i]);
            i++;
        }
        else if(A[i] > B[j])
        {
            ans.push_back(B[j]);
            j++;
        }
        else
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }

    while(i < A.size())
    {
        ans.push_back(A[i]);
        i++;
    }

    while(j < B.size())
    {
        ans.push_back(B[j]);
        j++;
    }

    for(int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << " ";
    }

    return 0;
}