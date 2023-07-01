#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int& b = a; // reference variable
    cout<<a<<endl;
    a++;

    cout<<b<<endl;
    return 0;
}