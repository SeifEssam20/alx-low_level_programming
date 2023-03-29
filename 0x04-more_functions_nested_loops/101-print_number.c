#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
int i, d = 1, negative = 0;

if (n < 0)
{
_putchar('-');
negative = 1;
}

for (i = n; i / 10 != 0; i /= 10)
d *= 10;

for (; d >= 1; d /= 10)
_putchar(((negative ? -1 : 1) * (n / d) % 10) + '0');
}
