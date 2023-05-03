#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1, result = 0;
while (s[i] == ' ')
i++;

if (s[i] == '-') {
sign = -1;
i++;
} else if (s[i] == '+') {
i++;
}
while (s[i] >= '0' && s[i] <= '9') {
 
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) {
if (sign == 1) {
return INT_MAX;
} else {
return INT_MIN;
}
}
result = result * 10 + (s[i] - '0');
i++;
}

return sign * result;
}

