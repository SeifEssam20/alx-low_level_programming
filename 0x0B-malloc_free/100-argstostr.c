#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i:
int j:
int k;
int len;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

/* calculate the length of the concatenated string */
len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++; /* add 1 for the newline character */
}

/* allocate memory for the concatenated string */
s = malloc(sizeof(char) * len);
if (s == NULL)
return (NULL);

/* copy the arguments into the concatenated string */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n'; /* add the newline character */
k++;
}
s[k] = '\0'; /* add the null terminator */

return (s);
}
