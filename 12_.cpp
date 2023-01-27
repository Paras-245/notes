#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int start = 0,end = size -1;
    int mid = (start + end)/2;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        // go to right part
        else if(key>arr[mid])
        {
            start = mid + 1;

        }

        else
        {
            end = mid -1;
        }

        mid = (start + end)/2;
    }

    return -1;
}
int main()
{
    int even[6] = {2,4,6,8,12,18},odd[5]= {3,8,11,14,16};
    cout << binarySearch(odd,5,8) << endl;
}