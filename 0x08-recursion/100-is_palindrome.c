#include "main.h"

int is_palindrome(char *s)
{
int len;

len = _strlen_recursion(s);

if (len <= 1)
return (1);

if (*s != *(s + len - 1))
return (0);

return (is_palindrome(s + 1) && 1);
}
