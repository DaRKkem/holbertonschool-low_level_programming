#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: the 1st string to merge
 * @src: the 2nd string to merge
 * @n: bytes from src
 *
 * Return: Always nothing.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
