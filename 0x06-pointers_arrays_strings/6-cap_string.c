#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *s)
{
int i = 0;
int string_count = 0;

while (s[string_count] != '\0')
{
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;

if (i == 0 || s[i - 1] == ' ' || s[string_count] == '\t' || s[string_count] == '\n'
|| s[string_count] == ',' || s[string_count] == ';' || s[string_count] == '.'
|| s[string_count] == '!' || s[string_count] == '?' || s[string_count] == '\"'
|| s[string_count] == '(' || s[string_count] == ')' || s[string_count] == '{'
|| s[string_count] == '}')
{
if (s[string_count + 1] >= 97 && s[string_count + 1] <= 122)
s[string_count + 1] = s[string_count + 1] - 32;
}
i++;
string_count++;
}
return (s);
}
