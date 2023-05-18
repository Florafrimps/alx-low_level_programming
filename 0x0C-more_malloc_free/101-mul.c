#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *str);
int _strlen(char *str);
void _multiply(char *num1, char *num2);
void _print_number(char *number, int size);

int main(int argc, char **argv)
{
    if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    _multiply(argv[1], argv[2]);

    return 0;
}

int _isdigit(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }

    return 1;
}

int _strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return len;
}

void _multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int len_result = len1 + len2;
    int i, j;
    int carry, n1, n2, sum;

    int *result = malloc(sizeof(int) * len_result);
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 0; i < len_result; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        n1 = num1[i] - '0';
        carry = 0;

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';

            sum = n1 * n2 + result[i + j + 1] + carry;
            carry = sum / 10;
            result[i + j + 1] = sum % 10;
        }

        if (carry > 0)
            result[i + j + 1] += carry;
    }

    _print_number(result, len_result);

    free(result);
}

void _print_number(char *number, int size)
{
    int i = 0;

    while (number[i] == 0 && i < size - 1)
        i++;

    if (i == size)
    {
        putchar('0');
        putchar('\n');
        return;
    }

    while (i < size)
    {
        putchar(number[i] + '0');
        i++;
    }
    putchar('\n');
}
