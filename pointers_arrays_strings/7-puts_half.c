#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * puts_half - prints half of a string
 * @str: the string
 *
 * Return: Always nothing.
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	j = i / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
