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
    if(A[i]==B[j])

    {
        ans.push_back(A[i]);
        i++;
        j++;
    }
       else if  (A[i] < B[j])

    {
        i++;

    }
    else
    {
        j++;
    }
   }
    for(int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << " ";
    }

   return 0;
}