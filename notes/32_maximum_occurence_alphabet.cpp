#include <bits/stdc++.h>
using namespace std;
char getMaxOccu(string s)
{
    int arr[26] = {0};
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if(ch>='a' && ch<='z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
        int ans = 0 , maxi = -1;
        for(int i = 0; i < 26; i++)
        {
            if(arr[i]>maxi)
            {
                ans = i;
                maxi = arr[i];
            }
        }
        
        char finalans = 'a' + ans;
        return finalans; 
}
int main()
{
    string st;
    cin>>st;

    cout<<getMaxOccu(st);
    return 0;
}