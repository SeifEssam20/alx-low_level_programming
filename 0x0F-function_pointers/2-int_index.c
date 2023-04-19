#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of the first element for which cmp doesn't return 0, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, result;

if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
result = cmp(array[i]);
if (result != 0)
return (i);
}
return (-1);
}
