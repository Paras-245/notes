#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    
    // address of Operator - &
    cout << &num << endl;    
    
    int *ptr = &num;

    cout << "value is : " << *ptr << endl;                                               
    return 0;
}