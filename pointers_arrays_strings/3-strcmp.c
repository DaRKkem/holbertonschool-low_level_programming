#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strcmp - compares two strings
 * @s1: the 1st character to compare
 * @s2: the 2nd character to compare
 *
 * Return: Always nothing.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
