#include <iostream>
using namespace std;
void fun (string &s, int idx ,string ans)
{
    if (idx == s.length())
    {

    cout << ans << endl;
    
    return ;
    }
   
    fun (s,idx+1,ans+s[idx]);

    fun (s,idx+1,ans);

}

int main ()
{
    string s = "abc";
    int idx = 0;
    string  ans = " ";
    fun(s, 0, ans);

     return 0;
}