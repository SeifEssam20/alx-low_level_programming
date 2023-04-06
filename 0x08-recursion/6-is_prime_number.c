#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
if (n <= 1)  /* 0, 1, and negative numbers are not prime */
return (0);
return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - recursive helper function to check if a number is prime
 * @n: the number to check
 * @div: the divisor to start with (should be 2)
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_helper(int n, int div)
{
if (div > n / 2)  /* we've checked all possible divisors */
return (1);
if (n % div == 0)  /* found a divisor, so n is not prime */
return (0);
return (is_prime_helper(n, div + 1));
}
