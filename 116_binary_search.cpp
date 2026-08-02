#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> &input,int target)
{
    //defining searching space 
    int low = 0;
    int high = input.size()-1;
    while(low <= high)
    {
        // calu mid point for search
       int mid = (low + high)/2;
    if(input[mid] == target) return mid;

    else if (input[mid] <target)
    {
        //discard left side 
        low = mid + 1; 
    }
    else{
        //discard wright side
        high = mid - 1;
    }

}
    return -1;
}

int main()
{
    vector<int> input = {2,3,4,5,6,7,8};
    int target = 8;
    cout << binarysearch(input,target);
    return 0;

}