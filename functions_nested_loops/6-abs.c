#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The character to verifie
 *
 * Return: '-n' if negative and 'n' if 0 or positive
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
