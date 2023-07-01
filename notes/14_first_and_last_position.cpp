#include <bits/stdc++.h> 
int First_occurence(vector<int>& arr, int n, int key)
{
    int start = 0, end =n-1;
    int mid  = start + (end - start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            end = mid -1;
        }

        else if(key>arr[mid])
        {
            start = mid +1;
        }
        else
        {
            end = mid - 1;
        }
        mid  = start + (end - start)/2; 
    }
    return ans;
}
int Last_occurence(vector<int>& arr, int n, int key)
{
    int start = 0, end =n-1;
    int mid  = start + (end - start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if(key>arr[mid])
        {
            start = mid +1;
        }
        else
        {
            end = mid - 1;
        }
        mid  = start + (end - start)/2; 
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = First_occurence(arr,n,k);
    p.second = Last_occurence(arr,n,k);
    return p;
}