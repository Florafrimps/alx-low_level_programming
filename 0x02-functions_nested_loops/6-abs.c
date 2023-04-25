#include "main.h"

/**
 * print_abs - computes the absolute value of a number
 * @n: the integer to compute the absolute value of
 * Return: 1 for positive number, -1 for negative num or zero for anything else
 */

int print_abs(int n)

{

if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}

}

