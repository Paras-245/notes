#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter Two numbers :";
    cin >>a>>b;
    int ans = gcd(a,b);
    cout << "The Gcd of Two numbers is :"<< ans;
    return 0;
}