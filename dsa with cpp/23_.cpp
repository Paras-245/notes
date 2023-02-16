#include<iostream>
#include<limits.h>
using namespace std;
bool isPresent(int arr[][3],int target,int row ,int col)
{
    for(int row = 0; row<3;row++)
    {
        for(int col = 0; col < 3;col++)
        {
            if(arr[row][col] == target)
            {
                return 1;
            }

        }
    }
    return 0;

}

void printSum(int arr[][3],int row,int col)
{
    for(int row = 0; row<3;row++)
    {
        int sum = 0;
        for(int col = 0; col < 3;col++)
        {
            sum+=arr[row][col];
        }
        cout << "sum of row " << row+1 << " is " << sum << endl;
    }
    
}
void largestRowSum(int arr[][3],int row,int col)
{
    int max = INT_MIN;
    int num = -1;
    for(int row = 0; row<3;row++)
    {
        int sum = 0;
        for(int col = 0; col < 3;col++)
        {
            sum+=arr[row][col];
        }
        if(sum>max)
        {
            max = sum;
            num = row;
        }
    }

    cout << "The maximum sum is "<< max <<" at row no " << num;

}

void spiralPrint(int arr[][4],int rows,int cols)
{
    int                                            left = 0,right = cols;
    int bottom = rows,top = 0;
    int elements = cols;

    while(elements > 0)
    {
        for(int i = left; i < right;i++)
        {
            cout << arr[left][i] << " ";
            elements--;
        }

        for(int j = left + 1 ;j<bottom;j++)
        {
            cout << arr[j][right - 1] << " ";
            elements--;
        }
        for(int k = left ; k < right - 1;k++)
        {
            cout << arr[bottom-1][right-k-2] << " ";
            elements--;
        }
        for(int l = top + 1;l < bottom - 1;l++)
        {
            cout << arr[left][l] << " ";
            elements--;
        }
    }
}

int main()
{
    // creating 2d array
    int arr[4][4];
    
    // taking input - row wise
    cout << "Enter the elements " << endl;
    for(int row = 0; row<4;row++)
    {
        for(int col = 0; col < 4;col++)
        {
            cin>>arr[row][col];
        }
    }

    // taking input - col wise
    // for(int row = 0; row<4;row++)
    // {
    //     for(int col = 0; col < 3;col++)
    //     {
    //         cin>>arr[row][col];
    //     }
    // }

    // output 
    cout << "printing the array " << endl;
    for(int i = 0; i<4;i++)
    {
        for(int j = 0; j < 4;j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    
    // searching in array

    // cout << "Enter the element to search " << endl;
    // int target ;
    // cin >>target;
    // if(isPresent(arr,target,3,4))
    // {
    //     cout << "Found!" << endl;
    // }
    // else 
    // cout << "Not Found!" << endl;
    // printSum(arr,3,4);

    // largest row sum
    // largestRowSum(arr,3,4);

    // spiral print
    spiralPrint(arr,4,4);





    return 0;
}