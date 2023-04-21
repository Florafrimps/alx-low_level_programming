#include <unistd.h>

/**
 * main - prints a quote to the standard error
 *
 * Return: 1 (always)
 */
int main(void)
{
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int len = 0;

    while (quote[len] != '\0')
        len++;

    write(2, quote, len);

    return (1);
}
