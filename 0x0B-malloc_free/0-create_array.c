#include "main.h"
/**
 * create_array - createsanarrayofcharsand initializes it with a specific char
 * @size: size of the array to create
 * @c: character to initialize the array with
 *
 * Return: Pointer to the created array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
char *array;

if (size == 0)
return (NULL);

array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
 
unsigned int i;
for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
