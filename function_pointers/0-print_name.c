#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to use
 *
 * Return: Always nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	if (name == NULL || f == NULL)
		return;
	if (f != print_name_uppercase && f != print_name_as_is)
		return;
	
	f(name);
}
