#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void)argc; /* Marking argc as unused to avoid compiler warning */
printf("%s\n", argv[0]);
return 0;
}

