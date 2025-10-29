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
	size_t i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		if (str[i+1] != '\0')
		{
			i = i + 2;
		}
		else
		{
			i++;
		}
	}
	write(1, "\n", 1);
}
