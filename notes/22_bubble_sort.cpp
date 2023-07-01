#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        bool swapped = false;
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }

    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 12, 7, 4, 19};
    int n = 5;
    bubbleSort(arr, n);
    printarray(arr,n);
    return 0;
}