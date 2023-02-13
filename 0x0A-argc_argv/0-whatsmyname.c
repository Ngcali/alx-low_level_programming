#include "main.h"
#include <stdio.h>

/**
 * main - prints program name,
 * followed by a new line.
 *
 * @*argv: pointer to char argv.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: integer value.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
