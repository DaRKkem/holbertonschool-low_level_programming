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

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = i / 2 + 1;
	}

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
