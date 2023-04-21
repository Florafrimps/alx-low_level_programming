#include <stdio.h>

/**
 * main - lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        continue;
    }

    for (c = 'z'; c >= 'a'; c--)
    {
        putchar(c);
    }

    putchar('\n');

    return (0);
}










