#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    
    // address of Operator - &
    // cout << &num << endl;    
    
    // int *ptr = &num;
    // // dereference operator
    // cout << "value is : " << *ptr << endl;
    // cout << "size of integer pointer is : "<<sizeof(ptr) << endl;

    // pointer to int is created , and pointing to some garbage address
    // int * p = 0;
    // cout << *p << endl;
    // return 0;


    
    int *p = &num;

    (*p)++;
    cout << num <<endl;

}