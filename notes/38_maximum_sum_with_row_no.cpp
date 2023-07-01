#include <bits/stdc++.h>
using namespace std;
void matrixSum(int arr[][3],int row ,int col)
{
    int maxi = INT_MIN;
    int rowindex = -1;
     for(int i = 0; i < row; i++)
    {
        int sum =0;
        for(int j=0; j<col; j++)
        {
            sum +=arr[i][j];
        }
        if(sum>maxi)
        {
            maxi = sum;
            rowindex = i;
        }
    }
    cout<<"Maximum sum is "<<maxi<<endl;
    cout<<"Row index is "<<rowindex<<endl;
}
int main()
{
    
    int arr[3][3];
    cout<<"Insert the values in matrix :"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    matrixSum(arr,3,3);;
    return 0;
}