#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_digit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * is_positive_number - checks if a string is a positive number
 * @s: string to check
 *
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(char *s)
{
int i = 0;

if (s[0] == '-')
return 0;
while (s[i] != '\0')
{
if (!is_digit(s[i]))
return 0;
i++;
}
return 1;
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1)
{
printf("0\n");
return 0;
}
for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return 1;
}
}

printf("%d\n", sum);
return 0;
}
