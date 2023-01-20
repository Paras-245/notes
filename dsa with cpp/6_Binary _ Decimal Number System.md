## Decimal to Binary :
### First Method :
1. Divide by 2 and store the remainder
2. repeat above until n != 0
3. reverse the answer
4.
### Second Method :
1. we know that if n&1 is 1 then it is even else it is odd
2. then we >> it bcs it mimics dividing by 2
3. then we have to print its reverse
     which can be done using : ans = (bit \* 10^i)+ans
4. to print the number as it is
	we use : ans = (ans \* 10)+digit

### Negative numbers to binary :
1. first ignore negative sign
2. convert to binary and gets 2's complement

## Binary to Decimal :
