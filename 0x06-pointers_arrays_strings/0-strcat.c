#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer.
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
int length_of_string = 0, j;

while (dest[length_of_string] != '\0')
{
length_of_string++;
}

for (j = 0; src[j] != '\0'; j++, length_of_string++)
{
dest[length_of_string] = src[j];
}

dest[length_of_string] = '\0';

return dest;
}


