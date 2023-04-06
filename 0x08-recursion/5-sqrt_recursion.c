#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return( -1);
if (n == 0 || n == 1)
return (n);
int res;
res = _sqrt_recursion(n / 4) * 2;
if ((res + 1) * (res + 1) <= n && (res + 1) * (res + 1) > 0)
return (res + 1);
else
return (res);
}
