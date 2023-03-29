#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
int i, j, k;

for (j = 1; j <= 10; j++)
{
for (k = 0; k <= 14; k++)
{
i = k;

if (k > 9)
{
_putchar(1 + '0');
i = k % 10;
}

_putchar(i + '0');
}

_putchar('\n');
}
}
