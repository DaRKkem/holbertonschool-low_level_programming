#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to puts in recursion
 *
 * Return: Always nothing.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
	else
	{
		_putchar('\n');
	}
}
