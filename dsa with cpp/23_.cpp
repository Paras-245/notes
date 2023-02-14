#include<iostream>
using namespace std;
int main()
{
    // creating 2d array
    int arr[3][4];
    
    // taking input - row wise
    for(int row = 0; row<3;row++)
    {
        for(int col = 0; col < 4;col++)
        {
            cin>>arr[row][col];
        }
    }

    // taking input - col wise
    for(int row = 0; row<4;row++)
    {
        for(int col = 0; col < 3;col++)
        {
            cin>>arr[row][col];
        }
    }

    // output 
    for(int i = 0; i<3;i++)
    {
        for(int j = 0; j < 4;j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }


    return 0;
}