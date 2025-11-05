#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to puts in reverse by recursion
 *
 * Return: Always nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
