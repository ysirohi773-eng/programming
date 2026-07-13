#include <iostream>
#include <string>
using namespace std;
void fun (string &s,int idx,char target)
{
    if(idx == s.length())
    return;

    if(s[idx]==target)
    {
      s.erase(idx,1);
       fun(s,idx,target);

    }
    else
    {
    fun(s, idx + 1, target);
    }

}
int main ()
{
    string s = "BABBAR";
    char target = 'B';

    fun(s, 0, target);

    cout << s;

     return 0;
}