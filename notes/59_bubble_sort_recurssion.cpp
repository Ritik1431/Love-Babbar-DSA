#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int *arr, int n)
{
    if(n==0 || n==1)
    {
        return ;
    }
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
    
}
int main()
{
    int arr[] = {2,8,4,6,5,7};
    int n = 6;
    bubble_sort(arr,n);
     for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}