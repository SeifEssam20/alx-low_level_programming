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
  int i, j = 0;
  (void)argv;

  for (i = 0; i < argc; i++)
    {
      j++;
    }

  if (j >= 10)
    {
      _putchar(j / 10 + '0');
      _putchar(j % 10 + '0');
    }
  else
    {
      _putchar(j + '0');
    }
  _putchar('\n');
  return (0);
}
