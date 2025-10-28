#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: Always nothing.
 */
void rev_string(char *s)
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

	i = 0;
	char *p2 = s;

	while (*p2 != '\0')
	{
		s[i] = str[i];
		p2++;
	}

	str[i] = '\0';
}
