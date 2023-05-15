#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str - char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
if (str == NULL)
return NULL;

int length = 0;
int i;

while (str[length] != '\0')
length++;

char *duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return NULL;

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return duplicate;
}
