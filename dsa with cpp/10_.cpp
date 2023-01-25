#include<iostream>
#include<limits.h>
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
    /*// Swap Alternate
    int arr[]= {1,2,3,4,5,6,7,8};
    printArray(arr,8);
    swapAlternate(arr,8);
    printArray(arr,8);
    */

    /*// find unique    
    int arr[]= {1,1,2,2,3,3,5};
    int ans = 0;
    for(int i =0; i < 7;i++)
    {
        ans = ans ^ arr[i];
        // cout << ans << ' ';
    }

    cout << ans<<endl;
    */

   
   /*/ Intersection of arrays
//    int arr1[] = {1,2,3,4,5,6,7,8},arr2[] = {9,10,11,12,13,14};

//    int intersection = 0;
//    for(int i = 0; i < 8;i++)
// 	{
// 		for(int j = 0 ; j<= arr1[i] && j < 6;j++)
// 		{
// 			if(arr2[j] == arr1[i])
//             {
//                 cout << arr1[i] << " ";
//                 arr2[j] = INT_MIN;
//                 intersection++;
//             }
// 		}
// 	}

//     if(intersection==0)
//     {
//         cout << -1 <<endl;
//     }
    // int this case we are getting tle
    */
    
    // 3 SUM
    int arr[] = {10, 5 ,5 ,5, 2 ,12},target = 12,size = 5;
    for(int i =0 ;i < size;i++)
    {
        for(int j = i +1;j < size;j++)
        {
            for(int k = j+1;k < size;k++)
            {
                if(arr[i]+arr[j]+arr[k] == target && )
            }

        }
    }

   




    
}