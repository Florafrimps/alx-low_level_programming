#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to compute the square root of
 *
 * Return: The natural square root of `n`, or -1 if `n` does not have a
 * natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0) { /* negative numbers don't have a natural square root */
return -1;
} else if (n == 0 || n == 1) { /* base case: square root of 0 or 1 is itself */
return n;
} else { /* recursive case: try smaller values until the square of mid^2 is greater than n */
int mid = n / 2;
int sqr = mid * mid;
if (sqr == n) {
return mid;
} else if (sqr < n) {
int sqrt_lower = _sqrt_recursion(mid);
if (sqrt_lower == -1) {
return -1;
} else {
return 2 * sqrt_lower;
}
} else { /* sqr > n */
int sqrt_lower = _sqrt_recursion(mid);
if (sqrt_lower == -1) {
return -1;
} else {
return 2 * sqrt_lower - 1;
}
}
}
}





