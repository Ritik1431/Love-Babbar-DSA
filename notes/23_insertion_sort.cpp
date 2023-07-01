#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n )
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
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
    insertionSort(arr, n);
    printarray(arr,n);
    return 0;
}