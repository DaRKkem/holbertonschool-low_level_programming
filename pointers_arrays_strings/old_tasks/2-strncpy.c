#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies the string pointed to by src
 * @dest: the char
 * @src: the string
 * @n: bytes from src
 *
 * Return: Always nothing.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
