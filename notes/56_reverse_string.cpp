#include <bits/stdc++.h>
using namespace std;
void reverse_string(string &str,int i , int j)
{
    if(i>j)
    {
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse_string(str,i,j);

}
int main()
{
    string str ="ritik";
    reverse_string(str,0,4);
    for(auto it:str)
    {
        cout<<it;
    }
    return 0;
}