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
	long int i = 0;
	int x = 0, y = 0, n = 0, stop = 0;

	if (s[0] == '\0')
	{
		return (n);
	}
	else
	{
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
			if (n == 0)
			{
				if (s[i] == '-')
				{
					x++;
				}
				else if (s[i] == '+')
				{
					y++;
				}
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
