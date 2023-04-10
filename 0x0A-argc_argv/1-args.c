#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
  printf("%d\n", argc - 1);

  return (0);
}
