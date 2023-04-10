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
  int num1, num2, product, i;

  if (argc != 3)
    {
      for (i = 0; "Error\n"[i]; i++)
	_putchar("Error\n"[i]);
      return (1);
    }

  num1 = _atoi(argv[1]);
  num2 = _atoi(argv[2]);
  product = num1 * num2 ;

  if (product < 0)
    {
      _putchar('-');
      product *= -1;
    }

  if (product == 0)
    _putchar('0');

  for (i = 1; product / i > 0; i *= 10)
    {
      ;
    }

  i /= 10;

  while (i > 0)
    {
      _putchar('0' + (product / i));
      product %= i;
      i /= 10;
    }

  _putchar('\n');

  return (0);
}

