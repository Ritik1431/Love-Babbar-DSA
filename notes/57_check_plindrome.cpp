#include <bits/stdc++.h>
using namespace std;
bool check_palindrome(string &str,int i , int j)
{
    if(i>j)
    {
        return false;
    }
    if(str[i]!=str[j])
    {
        return false;
    }
    i++;
    j--;
    check_palindrome(str,i,j);
    return true;
}
int main()
{
    string str ="ritir";
    cout<<check_palindrome(str,0,4);
    
    return 0;
}