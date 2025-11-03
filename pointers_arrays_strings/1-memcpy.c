#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _memcpy - copies memory area
 * @dest: the string pointed
 * @src: the constant
 * @n: the first 'n' bytes to start filling
 *
 * Return: The new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
