#include<iostream>
using namespace std;
int main()
{
    int a ;
    cin >> a;
    if(cin.fail())
    {
        cout << "Error occured!" << endl;
    }
    cout << a << endl;
    int b;
    cin.clear()
    cin >> b;
    cout << b << endl;
    return 0;

}