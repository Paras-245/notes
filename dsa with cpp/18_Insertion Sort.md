- we can remeber this with cards example
- like if i give you cards one by one and you make them sorted
## What is Insertion Sort :
- it will take n-1 rounds
- take first element at index 0
- then check the next element 
- if the no is smaller then no then check for previous element if exist
- else does not change the element
- we will not swap in these but we will shift elements
```cpp
void insertionSort(int n, vector<int> &arr)
{
	for(int i = 1;i<n;i++)
	{
		int temp = arr[i];
		int j = i-1;
		for(;j >= 0;j--)
		{
			if(arr[j]> temp)
			{
				arr[j+1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j+1] = temp;
	}
}
```
