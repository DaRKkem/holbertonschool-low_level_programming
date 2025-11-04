#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the number of bytes
 *
 * Return: The new string or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j, n = 0, stop;

	while (s[i] != '\0')
	{
		j = 0;
		stop = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				stop = 1;
				n++;
			}
			j++;
		}
		if (stop == 1)
		{
			break;
		}
		i++;
	}

	if (n == 0)
	{
		return (NULL);
	}
	return (s + n + 1);
}
