#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void)argc;
char *str = argv[0];

while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');

return (0);
}
