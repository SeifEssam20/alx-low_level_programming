#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
char *p = s;
int i;

while (*p)
{
for (i = 0; (*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'); i++, p++)
{
if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
*p += 13;
else
*p -= 13;
}
}
return (s);
}
