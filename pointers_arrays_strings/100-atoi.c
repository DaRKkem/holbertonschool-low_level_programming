#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _atoi - that convert a string to an integer
 * @s: the char
 *
 * Return: Always nothing.
 */
int _atoi(char *s)
{
	int i = 0, x = 0, n = 0, stop = 0;

	if (s[0] == '\0')
	{
		return (n);
	}
	else
	{
		i = 0, stop = 0;
		while (s[i] != '\0' && stop == 0)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				n = n * 10 + (s[i] - 48);
				if (s[i + 1] < '0' || s[i + 1] > '9')
				{
					stop = 1;
				}
			}
			if (s[i] == '-' && n == 0)
			{
				x++;
			}
			i++;
		}
		if (x % 2 == 1)
		{
			return (-n);
		}
		else
		{
			return (n);
		}
	}
}
