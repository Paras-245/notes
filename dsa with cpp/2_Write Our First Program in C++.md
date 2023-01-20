## Compiler : 
1. Translation 
2. Error Finding

## Ide (Integrated Development Enviornment) :

## First Program :
```c++
#include<iostream>
using namespace std;
int main() 
{
	cout<< "Namaste Dunia" << endl;
}
```

1. \#include\<iostream>: it is a preprocessor directive  in which cout is defined
2. using namespace std; : we say we need std namespace
3. int main() : our program will start from here
4. {} : these show the scope of the int main()
5. cout : it is used to print something to Standard Output using <<.
6. endl : new line or we also can use \\n
7. *;* : it is used to terminate statement

## Data Types :
1. int : which stores number like 1,2,98 and can take 2 or 4 bytes
2. char : used to store a single character and takes 1 byte
3. bool : it represents True or False and takes 1 byte
4. float : using with deciaml numbes and takes 4 bytes
5. double : takes 8 bytes


## Variables :
dont use variables with same name


## Sizeof() :
gives number  of bytes occupied by a variable.
sizeof(variable_name);


## How data is stored in memory : 
1. int : first integer is converted into binary and stored in allocated space.
   - when 32 bits are allocated the number assume 5 is converted to 101 and preceded by 0's and stored
   
2. char : it works with ascii table and map value with numbers and then stored like int

### Negative Numbers stored :
#### First bit  or (MSB):
- 0 -> positive
- 1 -> negative

#### store no is -5 : 
1. ignore negative sign and convert to binary which is 101 and it is preceded by zeros
2. takes 2's complement

#### display  or print -5 :
1. takes 2's complement again

### Store only positive numbers :
we can store only positve integers using unsigned int
#### When we try to store negative no in unsigned int :
- lets assume you have given a negative number. 
- it is represented in 2's complement and its msb is 1
- but due to unsigned int type it is assumed as positive no and given a very large number

### How char and int is differentiated in memory :
it is figured using the datatype we declared while initializing.

   

## Typecasting : 
when one datatype is converted to another type if it is valid


## Operators :
### Arithmetic Operators : 
- + (Addition)
- - (Subtraction)
- \* (Multiplication)
- / (Division)
- % (Modulos)

### Relational Operators :
- =
- >
- <
- >=
- <=
- !=

### Logical Operators :
- &&
- ||
- !
-

## Note :
- int / int = int
- float / int = float
- double / int = double
