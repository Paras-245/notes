#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    cout << "Printing array"<< endl;
    for(int i = 0; i < size;i++)
    {
        cout << arr[i] << ' ';
    }
    cout << "Printing Done"<< endl;

}

int getMax(int arr[],int n)
{
    int max = INT_MIN;
    for(int i = 0; i < n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;

}

int getMin(int arr[],int n)
{
    int min = INT_MAX;
    for(int i = 0; i < n;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;

}
int main()
{
    // declare 
    int number[15];
    
    // accessing 
    // cout << "value at 0 is " << number[0]<< endl;

    // initialising
    int second[3] = {4,3,2};
    // cout << "Second :" << second[2] << endl;

    int third[15] = {2,7};
    // printing array
    printArray(third,15);
 
    // int fourth[10] = {0};
    // n = 10;
    // for(int i = 0; i < n;i++)
    // {
    //     cout << fourth[i] << ' ';

    // }
    // printArray(fourth,10);

    // array of diff types

    // char ch[5]= {'a','b'};

    // max min

    int size ;
    cin >> size;
    int num[100];
    
    for(int i = 0 ; i <size ;i++)
    {
        cin >> num[i];
    }






}