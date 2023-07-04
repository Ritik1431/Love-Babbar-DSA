#include <bits/stdc++.h>
using namespace std;
int power(int n)
{
    if(n==0)
    {
        return 1;
    }
    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;
}
int main()
{
    int n;
    cout<<" Enter the Power of 2 : ";
    cin>> n;

    int ans = power(n);
    cout<<ans<<endl;
    return 0;
}