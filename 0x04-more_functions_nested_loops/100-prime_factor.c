#include <stdio.h>
#include <math.h>

/**
 * main - finds the largest prime factor of 612852475143
 * followed by a new line
 * Return: Always 0
 */

int main(void)

long int n;
long int i;

long int n = 612852475143;
n = 0;
while (n % 2 == 0)
{
long int n = 2;
n /= 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
long int = i;
n =n / i; 
}
}
if (n > 2)
long int = n
else
printf("%ld\n",i - 1);
return (0);

