- when we create a variable , we give it a name,but in the memory it is not identified by the name,it has a specific address,which is mapped by the symbol table(it is a data structure created by the compiler to keep track of variables,classes objects etc)
- there is *&* operator used to get the address of the variable 
- so pointer is used to deal with address of variables stuff
```cpp
int *ptr = &i;
```
- here the ptr variable hold the address of variable i
- here int tells the datatype our pointer pointing to
- \* is tehe dereference operator , it tells go to the address and gives the value here
## Size of pointer : 
- our datatype size will change but the size of pointer always will be fixed like 8 bytes
- when we try to access the null pointer we will get the segmentation fault
- if we change the variable by copying , it will not effect the original variable
- copy one pointer to another
## Pointer arithematic :
```cpp
int * t = null;
t=t+1;
```
-  here assume address stored in t is 100 it will increment the address stored to 104
- it will increment according to the size of datatype it pointing


