#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strspn - locates a character in a string
 * @s: the string
 * @accept: the number of bytes
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, n = 0, stop;

	while (s[i] != '\0')
	{
		j = 0;
		stop = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				stop = 0;
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
	return (n);
}
