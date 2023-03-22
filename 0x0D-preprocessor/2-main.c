#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *file = __FILE__;
	const char *filename = strrchr(file, '/');
	if (filename == NULL)
	{
		filename = file;
	}
	else
	{
		filename++; /* move past the slash */
	}
	printf("%s\n", filename);
	return (0);
}

