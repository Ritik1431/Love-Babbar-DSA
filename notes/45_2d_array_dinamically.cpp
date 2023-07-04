#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin>>row;

    int col;
    cin>>col;

    int** arr = new int*[row];
    for(int i = 0; i < row; i++)
    {
        arr[i] = new int[col];   // creating 2d array dinamically
    }

    //  taking input

    for(int i = 0; i < row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // taking output
    for(int i = 0; i < row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    // Releasing heap memory 
    for(int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }

    delete []arr;

    return 0;
}