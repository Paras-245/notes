#include<iostream>
using namespace std;
int main()
{
    char *str1 = (char *)"paras";
    char *str2 = "paras";

    cout << (&str1 == &str2) << endl;
    cout << &str2 << endl;
    return 0;
}