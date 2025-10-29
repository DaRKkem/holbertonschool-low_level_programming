#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strcpy - copies the string pointed to by src, including '\0'
 * @dest: the char
 * @src: the string
 *
 * Return: Always nothing.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
