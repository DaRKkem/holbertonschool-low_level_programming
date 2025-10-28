#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: the string
 *
 * Return: Always nothing.
 */
void print_rev(char *s)
{
	char str[1024];
	char *p = s;
	int i = 0;

	while (*p != '\0')
	{
		p++;
	}
	p--;

	while (p >= s)
	{
		str[i] = *p;
		i++;
		p--;
	}

	str[i] = '\0';
	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
