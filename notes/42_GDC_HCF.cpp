#include <bits/stdc++.h>
using namespace std;              // lcm(a,b) * gcd(a,b) = a*b   from this relation we can find lcm also
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;
}
int main()
{
    int a , b;
    cout<<"Enter the value of A and B "<<endl;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}