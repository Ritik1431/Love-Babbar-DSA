#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part) < s.length())
        {
            s.erase(s.find(part),part.length());
        }
        return s;
    }
int main()
{
    string st = "daabcbaabcbc";
    cout<<removeOccurrences("daabcbaabcbc","abc");
    return 0;
}