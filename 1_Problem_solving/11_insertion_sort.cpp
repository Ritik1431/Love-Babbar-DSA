#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }

}
int main()
{
    int arr[] = {20,5,40,60,10};
    int n = 5;
    insertionSort(arr,n);
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}