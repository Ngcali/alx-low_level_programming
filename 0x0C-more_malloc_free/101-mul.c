#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print_error(void)
{
    printf("Error\n");
    exit(98);
}

int parse_positive_number(const char *str, int *digits)
{
    int len = 0;
    while (*str != '\0') {
        if (!isdigit(*str)) {
            print_error();
        }
        digits[len] = *str - '0';
        len++;
        str++;
    }
    return len;
}

void multiply(int *result, int len1, const int *digits1, int len2, const int *digits2)
{
    int i, j, carry;
    for (i = 0; i < len1 + len2; i++) {
        result[i] = 0;
    }
    for (i = 0; i < len1; i++) {
        carry = 0;
        for (j = 0; j < len2; j++) {
            result[i+j] += digits1[len1-1-i] * digits2[len2-1-j] + carry;
            carry = result[i+j] / 10;
            result[i+j] %= 10;
        }
        result[i+len2] += carry;
    }
    while (result[len1+len2-1] == 0 && len1+len2 > 1) {
        len2--;
    }
}

void print_number(int len, const int *digits)
{
    int i;
    for (i = len-1; i >= 0; i--) {
        printf("%d", digits[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    int digits1[10000], digits2[10000], result[20000];
    int len1, len2;
    int i;

    if (argc != 3) {
        print_error();
    }

    len1 = parse_positive_number(argv[1], digits1);
    len2 = parse_positive_number(argv[2], digits2);

    multiply(result, len1, digits1, len2, digits2);

    print_number(len1+len2, result);

    return 0;
}
