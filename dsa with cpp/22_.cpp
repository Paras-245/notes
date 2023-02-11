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
void reverse(string name,int s,int e)
{
    // int s = 0;
    // int e = n-1;
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
void reverseWord(string str)
{
    int s = 0;
    int e = 0;
    for(int i = 0; i < str.length() -1 ;i++)
    {
        if(str[i] == ' ')
        {
            e = i - 1 ;
            reverse(str,s,e);
            s = i + 1;
        }
    }
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

    // reverse the words in string
    char s = "Hello my name is paras";
    reverseWord(s);
    cout << s<< endl;
    

    return 0;
}