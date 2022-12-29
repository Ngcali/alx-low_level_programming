#include "main.h"

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
