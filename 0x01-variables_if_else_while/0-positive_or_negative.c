#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Determine if a random number is positive, negativ eor zero
*
* Return: Always 0 (Success)
*/

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    printf("%d ", n);
    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");

    return (0);
}
