## Why it is necessery :
bcs it has some datatypes like vectors sets or another built in functions which help us
## Cpp STL:
1. Algorithms
2. Containers
## Containers:
### Sequence Containers:
#### Arrays :
- similar type of data stored in contigous memory 
- we need to include \#include\<array\>
- array \<datatype,size\> variable 
##### Methods :
1. array.at() : give value at the index
2. a.empty() : return a bool 
3. a.front() : gives the first element of the array
4. a.back() : gives the last element of the array

#### Vector :
- it is a dynamic array
- when the vector is filled up then it will double the size
- new vector will be created double the size of the filled vector and elements of first vector are copied to it and previous vector is dumped
- random access is possible like arrays
- vector\<datatype\> var;
- vector\<datatype\> var(size,value to which vector initialized);
- vector\<datatype\> v(previous v) here previous vector will be copied to the vector v
##### Methods :
1. v.capacity() : gives capacity of the vector
2. v.size() : gives the no of elements in the vector
3. v.push_back(value) : it push the value in the vector
4. we also can use the operations of array in vector
5. v.pop_back() : it will remove the last element
6. v.clear() : it will empty the vector,it will make the size of vector 0 but not the capacity
7. v.begin() : it wil give your iterator

### Deque (Doubly Ended Queue) :
- we can perform deletion and insertion from end as well as start
- it does not have contigous memory allocation
- it is dynamic & also have random access
- deque\<int\> d;
#### Methods :
1. push_back()
2. push_front()
3. at()
4. front()
5. back()
6. empty()
7. erase(start,end)

### List :
- implemented using doubly linked list
- it does not has direct access  we have to traverse
- list\<datatype\> var;
#### Methods :
1. push_back()
2. push_front()
3. erase()
4. size()
5. front()
6. end()

### Stack :
- First Come Last serve
- stack\<datatype\> name
#### Methods : 
- push()
- pop()
- top()
- size()

## Queue :
- first in first out
- queue\<dataype\> name;
#### Methods :
1. push()
2. front()
3. pop()

## Priority Queue :
- we can create two types - min heap or max heap
- 