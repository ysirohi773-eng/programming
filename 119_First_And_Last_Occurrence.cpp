#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &v, int target)
{
    int left = 0;
    int right = v.size() - 1;
    int ans = -1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(v[mid] == target)
        {
            ans = mid;
            right = mid - 1;      // Left side search
        }
        else if(v[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int lastOccurrence(vector<int> &v, int target)
{
    int left = 0;
    int right = v.size() - 1;
    int ans = -1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(v[mid] == target)
        {
            ans = mid;
            left = mid + 1;       // Right side search
        }
        else if(v[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> v = {1,2,3,3,3,5,11};

    int target = 3;

    int first = firstOccurrence(v, target);
    int last = lastOccurrence(v, target);

    cout << "First Occurrence : " << first << endl;
    cout << "Last Occurrence  : " << last << endl;

    return 0;
}