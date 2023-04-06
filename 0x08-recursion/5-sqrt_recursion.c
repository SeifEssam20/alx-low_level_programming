#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return -1;
if (n == 0 || n == 1)
return n;
int res = _sqrt_recursion(n / 4) * 2;
if (res * res <= n && (res + 1) * (res + 1) > n)
return res;
if (res * res > n)
return _sqrt_recursion(n / 4);
return _sqrt_recursion(n);
}
