## Sorting :
arranging elements in increasing or decreasing order
## What is Selection Sort :
- there will be diff rounds or passes
- in every pass we take the minimum element and put it on the correct place
- it will take n -1  rounds to take sort with this algo
```cpp
void selectionSort(vector<int>& arr, int n)
{
	for(int i = 0;i < n-1;i++)
	{
		int minIndex = i;
		for(int j = i +1;j < n;j++)
		{
			if(arr[j]<arr[minIndex])
			{
				minIndex = j;
			}
		}
	std::swap(arr[minIndex],arr[i]);
	}
}
```

## Complexity:
### Space Complexity : 
O(1)
### Time Complexity : 
Worst Case: O(n^2)
Best Case : O(n^2)

## Stability:
!(https://www.google.com/imgres?imgurl=https%3A%2F%2Fds1-iiith.vlabs.ac.in%2Fexp%2Fbubble-sort%2Fanalysis%2Fimages%2Fstable.png&imgrefurl=https%3A%2F%2Fds1-iiith.vlabs.ac.in%2Fexp%2Fbubble-sort%2Fanalysis%2Fstability-of-bubble-sort.html&tbnid=5zyZNjkX5SyjMM&vet=12ahUKEwiAzu6V5vH8AhVVktgFHXoLBF4QMygBegUIARDHAQ..i&docid=qhTZ1SkFrTf28M&w=413&h=331&q=is%20bubble%20sort%20stable&ved=2ahUKEwiAzu6V5vH8AhVVktgFHXoLBF4QMygBegUIARDHAQ)




## Use case :
- when array size is small then we use selection sort.
