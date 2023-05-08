#include "main.h"

/**
*_memeset - fill a block of memory with a spcific value
*@s : starting adress of memory to be filled
*@b: the designed value
*@n : number of bytes to be changed
*
*Return: changed array with new value for n bytes
*/


char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i = 0;

    for (i = 0; i < n; i++)
        *(s + i) = b;

    return (s);
}
