#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: Always nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] != '\0')
		{
			i += 2;
		}
		else
		{
			i += 2;
		}
	}
	_putchar('\n');
}
