## Switch Case :
it is basically same as if else if ladder but more efficient then this.
```cpp
switch(expression)//which evaluates to a integral value
{
	case constant1://constant can be a intger or char value but cant be float or string
		statements;
		break;
	case constant2:
		statements;
		break;
	case constant3:
		statements;
		break;
	default://defualt is optional
		statements

}
```
- if we dont use break our other cases are also executed
- we also can use nested switch cases

## Continue in switch :
in switch we cant use continue because it makes a error.
## Functions :
it is given a task which it can do multiple times by being called
Syntax:
```cpp
return_type func_name(arguments)
{
	body

	return return_type;
}
```


## Programs made:
- even checker
- ncr calculator
- prime checker

## Function Call Stack :
- functions are called in stack like plates in wedding which means (last come first serve)
- and first main is stored in stack then on it other functions are stored

## Pass by Value :
when we pass a variable like func(n) here a copy of n is being created n the func() function and both n are diff in their own scope

## Homework :
1. print ap = (3*n+7)
2. count set bits 
3. print fibonnachi series