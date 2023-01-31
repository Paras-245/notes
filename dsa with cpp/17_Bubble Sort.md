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
		if(swapped)
	}
}
```

## Complexity:
### Space Complexity : 
O(1)
### Time Complexity : 
Worst Case: O(n^2)
Best Case : generally we have complexity = O(n^2) but we can optimize the algo to 

## Use case :