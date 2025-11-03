#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the string pointed
 * @b: the constant
 * @n: the first 'n' bytes to start filling
 *
 * Return: The new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
