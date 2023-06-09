#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
char *str;
int i, k, len;
int total_len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len] != '\0')
{
len++;
total_len++;
}
total_len++;
}

str = malloc(sizeof(char) * (total_len + 1));
if (str == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len] != '\0')
{
str[k] = av[i][len];
len++;
k++;
}
str[k] = '\n';
k++;
}

str[k] = '\0';
return (str);
}

