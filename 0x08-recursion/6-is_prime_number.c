#include "main.h"

/**
 * is_prime_helper - Helper function to recursively check if a number is prime
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
if (n < 2 || n % i == 0)
return (0);
else if (i == n / 2)
return (1);
else
return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Check if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, 2));
}
