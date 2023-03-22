#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - Checks if a string represents a valid positive number
 * @num: The string to check
 *
 * Return: 1 if the string represents a valid positive number, 0 otherwise
 */
int is_valid_number(char *num)
{
    while (*num)
    {
        if (!isdigit(*num))
        {
            return 0;
        }
        num++;
    }
    return 1;
}

/**
 * str_to_int - Converts a string to an integer
 * @num: The string to convert
 *
 * Return: The integer value of the string
 */
int str_to_int(char *num)
{
    int result = 0;
    while (*num)
    {
        result = result * 10 + (*num - '0');
        num++;
    }
    return result;
}

/**
 * main - Entry point. Multiplies two positive numbers passed as arguments.
 * @argc: The number of arguments
 * @argv: The argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }

    int num1 = str_to_int(argv[1]);
    int num2 = str_to_int(argv[2]);
    int result = num1 * num2;

    printf("%d\n", result);
    return 0;
}
