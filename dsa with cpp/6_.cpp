#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    
    /*// decimal to binary using second method
    int ans = 0;
    int i = 0;
    while(n)
    {
        int bit = n&1;
        ans = (bit * pow(10,i) + ans);
        n = n>>1;
        i++;

    }
    cout << ans << endl;
    */

    /*// negative decimal to binary  
    unsigned long long int ans = 0,i = 0;
    if(n<0)
    {
        n = pow(2,16) +n;
    }
    while(n)
    {
        int bit = n&1;
        ans = (bit * pow(10,i) + ans);
        n = n>>1;
        i++;

    }
    cout << ans << endl;
    */
 
    /*// binary to decimal
    int ans = 0,i=0;
    while(n)
    {
        int digit = n%10;
        // cout << digit << " ";
        if(digit == 1)
        {
            ans += digit * pow(2,i);
        }
        i++;
        n=n/10;
    }

    cout << ans << endl;
    */

   int i = 0,ans = 0;
        while(n)
        {
            int digit = n%10;
            ans = digit*pow(10,i) + digit;
            n=n/10;
            i++;
        }
    
    
   




}