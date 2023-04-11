#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to newly allocated space containing s1 followed by s2
 *         NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int s1_len = 0;
int s2_len = 0;
int i;
int j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (*(s1 + s1_len))
s1_len++;

while (*(s2 + s2_len))
s2_len++;

concat_str = malloc(sizeof(char) * (s1_len + s2_len + 1));

if (concat_str == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
*(concat_str + i) = *(s1 + i);

for (j = 0; j < s2_len; j++, i++)
*(concat_str + i) = *(s2 + j);

*(concat_str + i) = '\0';

return (concat_str);
}
