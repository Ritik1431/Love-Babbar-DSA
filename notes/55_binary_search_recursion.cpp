#include <bits/stdc++.h>
using namespace std;
bool binary_search(int arr[],int s, int e, int key)
{
    if(s>e)
    {
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]>key)
    {
        return binary_search(arr,s,mid-1,key);
    }
    if(arr[mid]<key)
    {
        return binary_search(arr,mid+1,e,key);
    }
}
int main()
{
    int arr[] = {2,5,8,9,10};
    int n = 5;
    int key = 11;
    cout<<binary_search(arr,0,4,key);
    return 0;
}