- binary search only work only on monotonic(either increasing order or decreasing order)
1. find middle element and compare with key
2. if equal then return else decide the part of searching that is left or right 
### Note : 
we have written code in file but there was a catch that if the value of start and end will be 2^31 -1 then it will overflow range of int.
so at the place of mid = (s+e)/2 we use s+(e-s)/2.

## Time Complexity:
- O(logn)

