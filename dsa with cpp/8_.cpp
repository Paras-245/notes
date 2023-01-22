#include<iostream>
using namespace std;

bool isEven(int num)
{
    if(num%2==0)
    {
        return true;
    }
    else
    return false;
}

int fact(int num)
{

    int ans = 1;
    for(int i = 1;i <= num;i++)
    {
        ans = ans *i;
        
    }

    return ans;
}
int nCr(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));

}


void dummy(int n)
{
    cout << "n is "<< n << endl;
}

int main()
{

    /*//switch case
    int num = 2;
    switch(num)
    {
        case 1:
        cout << "First" << endl;
        break;
        case 2:
        cout << "Second" << endl;
        break;

        default:
        cout << "it is defualt case" << endl;  
    }*/
    
    /*//calculator with operation selection
    int a , b;
    char op;
    cout << "Enter Two Numbers :" << endl;
    cin >> a >> b;
    cout << "Enter the operation:" << endl;
    cin >> op;
    switch(op)
    {
        case '+':
        cout << a+b << endl;
        break;

        case '-':
        cout << a-b << endl;
        break;
        
        case '*':
        cout << a*b << endl;
        break;

        case '/':
        cout << a/b << endl;
        break;

        default:
        cout << "Invalid Case" << endl;
    }
    */

    /*// functions 

    //even odd
    // int num ;
    // cin >> num;
    // cout << isEven(num) << endl;

    // ncr
    // int n,r;
    // cin >> n>>r;
    // cout << nCr(n,r) << endl;
    */

    //call by value
    int n;
    cin >> n;
    dummy(n);
    cout <<"number is "
    
     

    

}