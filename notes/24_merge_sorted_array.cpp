#include <bits/stdc++.h>
using namespace std;
void mergearray(int arr1[], int n , int arr2[],int m, int arr3[])
{
    int i = 0 , j = 0 , k = 0 ;
    while(i<n&&j<n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void printarray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr1[] = {1,5,9,10};
    int n = 4;
    int arr2[] = {2,4,6,11};
    int m = 4;
    int arr3[n+m];
    mergearray(arr1,n,arr2,m,arr3);
    printarray(arr3,n+m);

    return 0;
}