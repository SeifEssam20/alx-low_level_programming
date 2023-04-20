#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the parameters passed to the function.
 * @n: The number of parameters passed to the function.
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++) {
sum += va_arg(args, int);
}
va_end(args);

return (sum);
}
