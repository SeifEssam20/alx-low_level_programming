#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
if (n < 0)
return (-n);
else
return (n);
}

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number whose last digit is to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;

last_digit = _abs(n % 10);
_putchar(last_digit + '0');

return (last_digit);
}


