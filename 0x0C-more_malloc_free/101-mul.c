#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int len1 = 0, len2 = 0, i, j, carry, n1, n2, sum;
    char *result;

    /* check for correct number of arguments */
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    /* check if arguments are valid numbers */
    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return (98);
            }
        }
    }

    /* calculate length of first number */
    while (argv[1][len1])
        len1++;

    /* calculate length of second number */
    while (argv[2][len2])
        len2++;

    /* allocate memory for result */
    result = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!result)
        return (1);

    /* initialize result to 0 */
    for (i = 0; i < len1 + len2; i++)
        result[i] = '0';

    /* multiply each digit and add to result */
    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = argv[1][i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = argv[2][j] - '0';
            sum = (n1 * n2) + (result[i + j + 1] - '0') + carry;
            carry = sum / 10;
            result[i + j + 1] = (sum % 10) + '0';
        }

        if (carry)
            result[i + j + 1] = (carry % 10) + '0';
    }

    /* remove leading zeros */
    while (*result == '0' && *(result + 1) != '\0')
        result++;

    /* print result */
    printf("%s\n", result);

    /* free memory */
    free(result);

    return (0);
}
