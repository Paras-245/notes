#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    cout << "Printing array"<< endl;
    for(int i = 0; i < size;i++)
    {
        cout << arr[i] << ' ';
    }
    cout << "Printing Done"<< endl;

}

void swapAlternate(int arr[],int size)
{
    int temp;
    for(int i = 0;i < size-1;i=i+2)
    {
        temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
        
    }
}
int main()
{
    */// Swap Alternate
    int arr[]= {1,2,3,4,5,6,7,8};
    printArray(arr,8);
    swapAlternate(arr,8);
    printArray(arr,8);
    */

    
}