#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string's length to count
 *
 * Return: the lenght of 's'
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
