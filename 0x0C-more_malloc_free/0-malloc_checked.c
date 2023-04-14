#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: A pointer to the allocated memory
 *Ifmallocfails,themalloc_checked function terminates with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
