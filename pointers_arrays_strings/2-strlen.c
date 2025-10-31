#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @dest: the 1st string to merge
 * @src: the 2nd string to merge
 * @n: bytes from src
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
