/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: An integer less than, equal to, or greater than zero, depending on
 * whether s1 is less than, equal to, or greater than s2, respectively.
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] != s2[i])
break;
}

return (s1[i] - s2[i]);
}
