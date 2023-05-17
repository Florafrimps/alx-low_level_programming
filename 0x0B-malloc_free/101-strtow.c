#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
int i, count = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}

return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, count;

if (str == NULL || *str == '\0')
return (NULL);

count = count_words(str);
if (count == 0)
return (NULL);

words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);

i = 0;
while (*str != '\0')
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
words[i][k] = *str++;

words[i][k] = '\0';
i++;
}

words[i] = NULL;
return (words);
}

