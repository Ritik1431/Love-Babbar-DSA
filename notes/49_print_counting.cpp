#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n==0)
    {
        return;
    }

    cout<<n<<endl;
    print(n-1);   // tail recursion
}
// void print(int n)
// {
//     if(n==0)
//     {
//         return;
//     }

//     print(n-1);        // head recursion
//     cout<<n<<endl;
// }
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}