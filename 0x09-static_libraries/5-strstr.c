#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *start, *check;

while (*haystack != '\0')
{
start = haystack;
check = needle;

while (*check == *haystack && *check != '\0'
&& *haystack != '\0')
{
haystack++;
check++;
}

if (*check == '\0')
return (start);

haystack = start + 1;
}

return (NULL);
}
