#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The character to verifie
 *
 * Return: 1 if 'c' is in lowercase or uppercase, 0 otherwise
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n >= 0)
	{
		return (n);
	}
	return (0);
}
