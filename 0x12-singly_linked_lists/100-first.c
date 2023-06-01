#include <stdio.h>

void __attribute__((constructor)) before_main()
{

/**
 * before_main - prints a sentence to be displayed
 * before the execution of the main function
 */

printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");

}
