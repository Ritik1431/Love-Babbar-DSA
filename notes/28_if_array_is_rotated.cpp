#include <bits/stdc++.h>
using namespace std;
bool isrotated(int arr[], int n)
{
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i-1] > arr[i])
        {
            count++;
        }
    }
    if(arr[n-1]>arr[0])
    {
        count++;
    }
    return count<=1;
}
int main()
{
    int n ;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<isrotated(arr,n);

    return 0;
}