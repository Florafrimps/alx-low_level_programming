#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: integer to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
/* base cases */
if (n <= 1)
return (0);
if (n <= 3)
return (1);

/* check if n is divisible by 2 or 3 */
if (n % 2 == 0 || n % 3 == 0)
return (0);

return (n, 5);
}

