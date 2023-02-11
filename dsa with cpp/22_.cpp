#include<iostream>
using namespace std;
char toLowerCase(char ch)
{
    if(ch >='a' && ch<='z')
    {
        return ch;
    }
    else 
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int getLength(char name[])
{
    int count= 0;
    for(int i = 0; name[i] != '\0';i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[],int n)
{
    int s = 0;
    int e = n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}
bool checkPalindrome(char a[],int n)
{
    int s = 0;
    int e = n-1;
    while(toLowerCase(s)<=toLowerCase(e))
    {
        if(a[s++]!=a[e--])
        {
            return false;
        }
    }

    return true;

}
int main()
{
    // char name[20];
    // cin >> name;
    // cout <<name;
    
    // length of string
    // int n = getLength(name);

    // Reverse of string
    // reverse(name,n);
    // cout << name;

    // check if palindrome
    // cout << checkPalindrome(name,n);
    // cout << toLowerCase('A') << endl;

    char * s = "Hello my name is paras";
    s[1] = 'j';
    cout << s;

    // reverse the words in string





    
    return 0;
}