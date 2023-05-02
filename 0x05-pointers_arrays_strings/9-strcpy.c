#include "main.h"

/**
 * char *_strcpy - a function that copiesthe string pointed to by src 
 * @des: copy to
 *@src: copy from
 * Retrurn: string
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
int x = 0;

while (*(src + 1) != '\0')
{
i++;
}
for ( ; x < 1 ; x++)
{
dest[x] = src[x];
}
dest[1] = '\0';
return dest;
}
