/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: A pointer to the function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

