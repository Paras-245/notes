## What is Bubble Sort :
- we also make rounds to array 
- we will comparing two adjacent elements if the next element is greater then we will swap
- if the element is smaller then we will do nothing
- we will do n - 1 rounds
```cpp
void bubbleSort(vector<int>& arr, int n)
{
	bool swapped = false;
	for(int i =0;i < n-1;i++)
	{
		for(int j = 0;j < n -(1+i);j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				swapped = true;
			}
		}
		if(swapped==false)
		{
			break;
		}
	}
}
```

## Complexity:
### Space Complexity : 
O(1)
### Time Complexity : 
Worst Case: O(n^2)
Best Case : generally we have complexity = O(n^2) but we can optimize the algo to make it O(1)
## Stability :
- it is a stable algorithm
## Inplace Algorithm :
An in-place algorithm is an algorithm that does not need an extra space and produces an output in the same memory that contains the data by transforming the input ‘in-place’. However, a small constant extra space used for variables is allowed.
