#include "main.h"

/**
 * set_string - sets the value of
 * a pointer to a char.
 *
 * @**s: pointer to a pointer to char s.
 * @*to: pointer to char to.
 *
 * @s: value to be modified.
 * @to: char to be assigned to the value of s.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
