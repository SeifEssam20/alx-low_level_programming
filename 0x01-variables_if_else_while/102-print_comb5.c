#include <stdio.h>
/**
 * main - entry point of the program
 * print_numbers - prints the numbers from 0 to 9
 * Return: void
 */
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
