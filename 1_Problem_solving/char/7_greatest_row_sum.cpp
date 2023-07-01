#include <bits/stdc++.h>
using namespace std;
int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i = 0; i < 3; i++)
    {
        int sum = 0;
        for(int j=0; j<3; j++)
        {
            sum += arr[i][j];
        }
        if(sum>maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"Maximum sum is "<<maxi<<endl;
    return rowIndex;
}
int main()
{
    int arr[3][3];
    cout<<"Enter the elements "<< endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    int AnsIndex = largestRowSum(arr,3,3);
    cout<<"Index is "<<AnsIndex<<endl;

    return 0;
}