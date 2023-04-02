#include"main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
int sign = 1, num = 0;

while (*s)
{
if (*s == '-')
sign = -sign;

if (*s >= '0' && *s <= '9')
{
if (num < INT_MIN / 10 || (num == INT_MIN / 10 && *s - '0' > 8))
{
if (sign == -1)
return (INT_MIN);
else
return (INT_MAX);
}

num = num * 10 - (*s - '0');
}

if (num && (*s < '0' || *s > '9'))
break;

s++;
}

return (sign * -num);
}
