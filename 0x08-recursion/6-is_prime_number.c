#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: integer to check
 * @divisor: divisor to check n against
 * Return: 1 if prime, 0 otherwise
 */
   
int is_prime_helper(int n, int divisor)
{
/* base cases */
if (n <= 1)
return (0);
if (divisor >= n)
return (1);
/* check if n is divisible by divisor */
if (n % divisor == 0)
return (0);

return (is_prime_number(n, divisor + 1));
}
