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
    n++;
    cout << "n is "<< n << endl;
}

int ap(int n)
{
    return 3*n+7;
}

int countSetBits(int a)
{
    int count = 0;
    while(a)
    {
        if(a&1)
        {
            count++;
        }
        a=a>>1;
    }

    return count;
}

int fib(int n)
{
    int a = 0,b =1,sum = 0;
    for(int i = 0;i < n;i++)
    {
        sum = a + b;
        a = 
    }
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
    // int n;
    // cin >> n;
    // dummy(n);
    // cout <<"number n is " << n << endl;

    // Homework
    /*// question 1 print ap series 3n + 7
    int n;
    cin >> n;
    cout << ap(n) << endl;
    */
    /*// ques 2 count set bits in a and b
    int a ,b;
    cin >>a>>b;
    cout << countSetBits(a)+countSetBits(b) << endl;
    */
    //ques3 print nth number of fib series
    int n;
    cin>>n;
    cout << fib(n) << endl;

    

}