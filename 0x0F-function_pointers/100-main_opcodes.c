#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char *addr, int nbytes);

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the program arguments
 *
 * Return: 0 on success, or a non-zero error code on failure
 */
int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int nbytes = atoi(argv[1]);
if (nbytes < 0)
{
printf("Error\n");
return (2);
}

unsigned char *addr = (unsigned char *)main;
print_opcodes(addr, nbytes);

return (0);
}

/**
 * print_opcodes - prints the opcodes of a given function
 * @addr: the address of the function to print
 * @nbytes: the number of bytes to print
 *
 * Return: void
 */
void print_opcodes(unsigned char *addr, int nbytes)
{
int i;
for (i = 0; i < nbytes; i++)
{
printf("%02x", *(addr + i));
if (i < nbytes - 1)
printf(" ");
}
printf("\n");
}
