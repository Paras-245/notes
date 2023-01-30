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

