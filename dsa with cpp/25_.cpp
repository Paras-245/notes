#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    
    // address of Operator - &
    cout << &num << endl;    
    
    int *ptr = &num;
    // dereference operator
    cout << "value is : " << *ptr << endl;

    cout << "size of integer pointer is : "
    return 0;
}