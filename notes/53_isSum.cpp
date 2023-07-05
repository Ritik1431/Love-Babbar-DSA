#include <bits/stdc++.h>
using namespace std;
int is_sum(int arr[], int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    else{
        return arr[0] + is_sum(arr+1,n-1);  // using recusrsion

    }
}
int main()
{
    int arr[] = {1,2,31,4,5,6};
    int n = 6;
    cout<<is_sum(arr,n);
    return 0;
}