#include<iostream>
#include<typeinfo>
using namespace std;
int main() // start of program
{
	//represent scope of int main
	// cout<< "Namaste Dunia" << endl;
    
	// overflowing the range of int
	int a = 300000000000;
	cout << a <<endl;

	// case of negative no in unsigned int
	unsigned int b =  -123;
	cout << b <<endl;

	int num1 = 10;
	int num2 = 20.0;
	cout << typeid(num1 + num2).name() << endl;

	
}