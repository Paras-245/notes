#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n,int key)
{
    int s = 0, e = n -1,ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid -1;
        }
        else if (key > arr[mid]) // right
        {

        }

        else if(key < arr[mid])
        {

        }
    }

    mind = s+(e-s)/2;
}
int main()
{
    int even[] = {1,2,3,3,5};


}