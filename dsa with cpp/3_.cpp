# include<iostream>
using namespace std;
int main()
{
    // int a;
    // cin>>a;
    // if a is positive
    // if(a>0)
    // {
    //     cout<<"Positive"<<endl;
    // }
    // else
    // {
    //     cout << "Negative" <<endl;
    // }


    // checking type of character entered
    // char ch;
    // cin >> ch;
    // if(ch >= 'a' && ch <= 'z')
    // {
    //     cout << "Lower case" << endl;
    // }

    // else if(ch >= 'A' && ch <= 'Z')
    // {
    //     cout << "Upper Case" << endl;
    // }

    // else if(ch >= '0' && ch <= '9')
    // {
    //     cout << "Numeric" << endl;
    // }

    
    // printing from 1 to n using while loop
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i<<endl;
    //     i++;
    // }
    

    // print sum of 1 to n
    // int n,sum = 0,i =1;
    // cin >> n;
    // while(i <= n)
    // {
    //     sum+=i;
    //     i++;
    // }
    // cout << sum << endl;

    
    // fahrenheit to celsius
    // float fahrenheit;
    // cin >> fahrenheit;
    // float celsius = (5.0/9)*(fahrenheit -32);
    // cout << celsius << endl;

    
    // prime or not
    // int n;
    // cin >> n;
    // int i = 2;
    // while(i < n) 
    // {
    //     if (n%i == 0)
    //     {
    //         cout << "not prime\n";
    //     }

    //     i++;
    // }

    
    // pattern 1
    // ++++
    // ++++
    // ++++
    // ++++
    // int n , i =1;
    // cin >> n;
    // while(i <=n)
    // {
    //     int j = 1;
    //     while(j <= n)
    //     {
    //         cout << "+";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;

    // }


    // pattern 2
    // 111
    // 222
    // 333

    int n,i = 1;
    cin >>n;
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            cout << i << " ";
            j++;
        }
        i++;
        cout << endl;

    }







    



}