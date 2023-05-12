#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = 0, i;

/* get length of string */
while (s[len] != '\0')
len++;

/* check first and last characters, then recursively check middle */
for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - 1 - i])
return (0);
}

return (1);
}
