#include<iostream>
using namespace std;
int getPivot(int arr[],int n)
{
    int s = 0,e = n-1,mid = s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;  
        }
        mid = s+(e-s)/2;
    }
    return s;

}
int getSqrt(int n)
{
    int s = 0,e = n-1,ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(mid*mid > n)
        {
            e = mid-1;
        }
        else if(mid*mid <=n)
        {
            ans = mid;
            s = mid+1;   
        }
        else
        {
            return mid;
        }
        mid = s+(e-s)/2;
        
    }
    return ans;
}


int main()
{
    /*// find pivot in array
    int arr[5] = {8,10,17,1,3};
    cout << "Pivot is " << getPivot(arr,5)<<endl; 
    */

   //find sqrt of number using binary search
   int n;
   cin >> n;
   cout << getSqrt(n) << endl;
   

 

}