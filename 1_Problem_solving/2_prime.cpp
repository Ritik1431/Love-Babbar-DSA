#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
} 