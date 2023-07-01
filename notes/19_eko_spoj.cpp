#include <bits/stdc++.h>
using namespace std;
bool isPossibleSolution(int a[], int n, int m, int mid)
{
    int i, value, sum = 0;
    for (i = 0; i < n; i++)
    {

        if (a[i] > mid)
        {
            value = a[i] - mid;
            sum = sum + value;
        }
    }
    // cout<<sum<<"\t";
    if (sum >= m)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

int main()
{
    // n - no of trees and m - required wood
    int n, a[20], left = 0, right, mid, ans = -1, m;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    right = max;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (isPossibleSolution(a, n, m, mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout<<"Height of wood should be " <<ans;
}