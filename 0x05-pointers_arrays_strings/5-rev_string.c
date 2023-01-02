#include "main.h"
#include "stdio.h"

/**
 * rev_string - reverses a string.
 *
 * @*s: pointer which points to
 * char s.
 *
 * @s: char which is pointed to.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int i;
	int my_counter;
	int my_temp_var;

	for (i = 0; s[i] != '\0'; ++i)
	{}

	my_counter = 0;
	i -= 1;
	while (my_counter < i)
	{
		my_temp_var = s[my_counter];
		/*s[my_counter] = s[i - my_counter - 1];
		s[i - my_counter - 1] = my_temp_var;*/
		my_counter++;
		i--;
	}
}
