#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks if a number is greater or lower than 0 or if it's 0
 * @n: The character to verifie
 *
 * Return: 1 if 'c' is in lowercase or uppercase, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
