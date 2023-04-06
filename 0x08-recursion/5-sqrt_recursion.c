#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
int res;

if (n < 0)
return (-1);
else if (n < 2)
return (n);

res = _sqrt_recursion(n / 4) * 2;
if ((res * res) >= n)
return (res);
else
return (res + 1);
}
