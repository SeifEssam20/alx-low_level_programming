#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 * _abs - Computes the absolute value of an integer
 * Return: The value of the last digit
 */

int _abs(int n)
{
if (n < 0)
return (-n);
else
return (n);
}

int print_last_digit(int n)
{
int last_digit;

last_digit = _abs(n % 10);
_putchar(last_digit + '0');

return (last_digit);
}
