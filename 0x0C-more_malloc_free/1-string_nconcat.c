#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i, j;
char *result;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;

if (n >= len2)
n = len2;

result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
result[i] = s1[i];

for (j = 0; j < n; j++, i++)
result[i] = s2[j];

result[i] = '\0';

return (result);
}
