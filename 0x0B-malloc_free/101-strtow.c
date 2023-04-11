#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int words = 0, i = 0;

while (str[i])
{
if (str[i] != ' ')
{
words++;
while (str[i] && str[i] != ' ')
i++;
}
else
i++;
}

return (words);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
char **words;
int i = 0, j, k, len, word_count;

if (str == NULL || str[0] == '\0')
return (NULL);

word_count = count_words(str);

words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);

while (i < word_count)
{
while (*str == ' ')
str++;
len = 0;
while (str[len] != ' ' && str[len] != '\0')
len++;
words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
words[i][k] = *(str++);
words[i][k] = '\0';
i++;
}

words[i] = NULL;

return (words);
}
