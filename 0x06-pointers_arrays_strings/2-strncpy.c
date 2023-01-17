#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int i, j;

	while (src[b])
	{
		b++;
	}

	for (i = 0; a < n && src[a]; i++)
	{
		dest[a] = src[a];
		a++;
	}

	for (j = 0; a < n; j++)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
