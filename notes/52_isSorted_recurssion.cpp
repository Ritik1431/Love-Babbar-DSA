#include <bits/stdc++.h>
using namespace std;
bool is_sorted(int arr[], int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool remaining_part = is_sorted(arr+1,n-1);
        return remaining_part;

    }
}
int main()
{
    int arr[] = {1,2,31,4,5,6};
    int n = 6;
    bool ans = is_sorted(arr,n);
    if(ans)
    {
        cout<<"It is sorted";
    }
    if(!ans)
    {
        cout<<"It is not  sorted";
    }
    return 0;
}