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
void reverse(char name[],int s,int e)
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
void reverseWord(char str[])
{
    int s = 0;
    int e = 0;
    int n = getLength(str);
    for(int i = 0; i < n - 1  ;i++)
    {
        if(str[i] == ' ')
        {
            e = i - 1 ;
            reverse(str,s,e);
            s = i + 1;
        }
    }
    reverse(str,s,n -1);
}

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};
    for(int i =0; i < s.length();i++)
    {
        char ch = s[i];
        if(ch>='a' && ch <= 'z')
        {
            int n = ch - 'a';
            arr[n]++;

        }
        else
        {
            int n = ch -'A';
            arr[n]++;
        }
    }
    int max = -1,ans = -1;
    for(int j = 0; j<26;j++)
    {
        if(max < arr[j])
        {
            max = arr[j];
            ans = j;
        }
    }
    
    return 'a'+ans;
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
    // char s[] = "Hello my name is paras";
    // reverseWord(s);
    // cout << s<< endl;

    // return maximum occurring character in an input string
    string s;
    cin >> s;
    // cout << getMaxOccCharacter(s) << endl;
    cout << strlen(s);


    
    

    return 0;
}