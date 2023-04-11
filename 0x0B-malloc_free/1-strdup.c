#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string to duplicate.
 *
 * Return: pointer to the duplicated string, NULL if insufficient memory
 *         was available or str is NULL.
 */
char *_strdup(char *str)
{
char *new_str;
unsigned int len;
unsigned int i;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

new_str = malloc(sizeof(char) * (len + 1));
if (new_str == NULL)
return (NULL);

for (i = 0; i <= len; i++)
new_str[i] = str[i];

return (new_str);
}
