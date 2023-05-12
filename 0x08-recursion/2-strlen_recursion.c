#include <stdio.h>
#include "main.h"

int main(void)
{
    char *str = "Hello, world!";
    int len = _strlen_recursion(str);
    printf("The length of \"%s\" is %d\n", str, len);
    return (0);
}
