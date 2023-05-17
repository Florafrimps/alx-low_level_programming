#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, ci;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = ci = 0;
while (s1[i] != '\0')
i++;
while (s2[ci] != '\0')
ci++;

concat = malloc(sizeof(char) * (i + ci + 1));
if (concat == NULL)
return (NULL);

i = ci = 0;
while (s1[i] != '\0')
{
concat[i] = s1[i];
i++;
}

while (s2[ci] != '\0')
{
concat[i] = s2[ci];
i++;
ci++;
}

concat[i] = '\0';
return (concat);
}

