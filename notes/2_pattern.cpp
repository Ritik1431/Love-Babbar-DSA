#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r = 1;
    while(r<=n)
    {
        int c = 1;
        while(c<=r)
        {
            if(r%2==0)
            {
                cout<<"^";
            }
            else
            {
                cout<<"*";
            }
            c = c+1;

        }
        cout<<endl;
        r = r+1;
    }
    return 0;
}