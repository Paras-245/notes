#include<iostream>
#include<limits.h>
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

bool linearSearch(int arr[], int size,int key)
{
    for(int i = 0;i < size;i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }

    return false;

}

void reverseArr(int arr[],int size)
{
    int start = arr[0],end = arr[size - 1],temp;
    for(;start < end;start++,end--)
    {
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = arr[end];
        
    }

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
    // int size ;
    // cin >> size;
    // int num[100];
    
    // for(int i = 0 ; i <size ;i++)
    // {
    //     cin >> num[i];
    // }

    // cout << "maximum is " << getMax(num,size) << endl;
    // cout << "minimum is " << getMin(num,size) << endl;

    // Linear Search

    // int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    // int key;
    // cin >> key;
    // bool found = linearSearch(arr,10,key);
    // if(found)
    // {
    //     cout << "key found";
    // }

    // else
    // {
    //     cout << "not found";
    // }

    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    









}