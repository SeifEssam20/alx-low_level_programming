#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc.
 * The memory is initialized to zero.
 *
 * @nmemb: Number of elements to allocate.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}

/* Set memory to zero */
memset(ptr, 0, nmemb * size);

return (ptr);
}
