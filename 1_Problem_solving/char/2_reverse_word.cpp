#include <bits/stdc++.h>
using namespace std;

string ReverseWord(string s)
{
    int l = 0, r = 0;
    while(l<s.size())
    {
        while(r<s.size() && s[r] != ' ')
        {
            r++;
        }
        reverse(s.begin() + l , s.end() + r);
        l = r+1;
        r = l;
    }
    return s;

}
int main()
{
    string st = "Let's take LeetCode Contest";
    ReverseWord(st);
    cout<<st;

    return 0;
}
