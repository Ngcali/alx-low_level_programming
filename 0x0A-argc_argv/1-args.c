#include <stdio.h>

/**
 * main - prints the number of
 * arguments passed into it.
 *
 * @argc: number of aguements passed.
 *
 * @*argv: pointer to argv.
 *
 * @argv: array of arguments.
 *
 * Return: 0
 */


int main(int argc, void *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
