#include <stdlib.h>

/**
 * create_array - array for printing a string.
 * @size: number of elements array
 * @c: char
 * Return: pointer.
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
return NULL;

buffer = malloc(size * sizeof(char));
if (buffer == NULL)
return NULL;

position = 0;
while (position < size)
{
buffer[position] = c;
position++;
}

return buffer;
}
