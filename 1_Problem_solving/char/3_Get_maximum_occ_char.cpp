#include <bits/stdc++.h>
using namespace std;
char GetMaxOccCharacter(string s)
{
    int arr[26] = {0};

    // create an arr of count of char in a sting
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        //Lowecase
        if(ch >= 'a' && ch<='z')
        {
            number = ch -'a';
        }
        else // uppercase
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans =0;
    for(int i = 0; i < 26; i++)
    {
        if(maxi<arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    int final = 'a' + ans;
    return final;
}
int main()
{
    string st;
    cin>>st;
    cout<<GetMaxOccCharacter(st)<<endl;
    return 0;
}