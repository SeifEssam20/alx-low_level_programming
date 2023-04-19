#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point. Performs simple operations.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 98 if the number of arguments is wrong,
 *         99 if the operator is none of the expected ones,
 *         100 if the user tries to divide by 0.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *operator;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);

op_func = get_op_func(operator);
if (op_func == NULL)
{
printf("Error\n");
return (99);
}

if ((*operator == '/' || *operator == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

result = op_func(num1, num2);
printf("%d\n", result);

return (0);
}
