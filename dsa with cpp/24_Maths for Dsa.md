## Prime Numbers :
### Bruteforce Approach :
- we check from 2 to n-1 and check remainder 
- its complexity is O(N)
- if we go with this approach it can give time limit exceeded
## Sieve of Eratosthenes:
The Sieve of Eratosthenes is a simple and ancient algorithm for finding all prime numbers up to a specified limit.The algorithm works by iteratively marking the multiples of each prime number, starting with 2, and then moving on to the next unmarked number until all numbers up to the limit have been considered. Any unmarked numbers that remain are prime.
- its time complexity : O(n*(log(logn)))

## Gcd / Hcf:
it a factor which can divide both numbers
there is also a relation that is : lcm(a,b) * gcd(a,b) = a * b
## Euclid Algorithm: 
it is used to calculate hcf
- gcd(a,b) = gcd (a-b,b) = gcd(a%b,b)

## Modulo arithematic :
- (a+b) % m = a%m + b%m
- a%m  - b%m = (a-b)%m
- a%m \* b%m = (a\*b)%m
 [Fast Exponentiation](https://www.codingninjas.com/codestudio/problem-details/modular-exponentiation_1082146)


## Questions:
1. [Count Primes](https://leetcode.com/problems/count-primes/description/)
2. homework : Segmented sieve
3. pigeonhole principle
4. catalan number
5. inc - excl principle
6. lucas theorem
