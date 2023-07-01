#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void swapAlternate(int arr[], int n)
{
    for(int i = 0; i < n; i = i+2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int arr[] = {1,2,7,8,5} , 
    n = 5;
    swapAlternate(arr,n);
    printArray(arr,n);
    return 0;
}