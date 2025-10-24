#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a character is in scope [a-z]
 *
 *
 * Return: 1 if 'c' is in lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		puts("1");
		return (1);
	}
	else
	{
		puts("0");
		return (0);
	}
}
