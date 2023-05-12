#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * get_change - calculates the minimum number of coins to make change
 * for an amount of money
 * @cents: the amount of cents to make change for
 *
 * Return: the minimum number of coins
 */
int get_change(int cents)
{
int coins = 0;

if (cents <= 0)
return 0;

while (cents >= 25)
{
cents -= 25;
coins++;
}

while (cents >= 10)
{
cents -= 10;
coins++;
}

while (cents >= 5)
{
cents -= 5;
coins++;
}

while (cents >= 2)
{
cents -= 2;
coins++;
}

while (cents >= 1)
{
cents -= 1;
coins++;
}

return coins;
}

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int cents, num_coins;

if (argc != 2)
{
printf("Error\n");
return 1;
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return 0;
}

num_coins = get_change(cents);
printf("%d\n", num_coins);

return 0;
}
