#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: number of arguments.
 *
 * @*argv: pointer to argv.
 *
 * @argv: array of arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[]) {
    int my_num1, my_num2, my_result;

    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    my_num1 = atoi(argv[1]);
    my_num2 = atoi(argv[2]);
    my_result = my_num1 * my_num2;

    printf("%d\n", my_result);
    return 0;
}
