#include<iostream>
using namespace std;

int main()
{
    // declare 
    int number[15];
    
    // accessing 
    cout << "value at 0 is " << number[0]<< endl;

    // initialising
    int second[3] = {4,3,2};

    cout << "Second :" << second[2] << endl;

    int third[15] = {2,7};
    int n = 15;
    for(int i = 0; i < n;i++)
    {
        cout << third[i] << ' ';

    }



}