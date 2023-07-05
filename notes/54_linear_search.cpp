#include <bits/stdc++.h>
using namespace std;
bool is_Present(int arr[], int n,int key)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    else{
        
        return is_Present(arr+1,n-1,key) ;

    }
}
int main()
{
    int arr[] = {1,21,31,4,51,6};
    int n = 6;
    int key = 6;
    cout<<is_Present(arr,n,key);
    return 0;
}