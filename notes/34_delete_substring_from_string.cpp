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
    string st,part;
    cout<<"Enter the string "<<endl;
    getline(cin,st);
    cout<<"Enter the Substring you want to remove "<<endl;
    cin>>part;
    cout<<removeOccurrences(st,part);
    return 0;
}