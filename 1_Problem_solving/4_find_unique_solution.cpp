#include<bits/stdc++.h>
using namespace std;
int findUnique(int arr[],int n)
{
    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {1,2,3,5,3,2,1};
    int n = 7 ;
    cout<<findUnique(arr,n);
    return 0;
}