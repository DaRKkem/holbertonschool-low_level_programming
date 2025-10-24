#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks if a character is in scope [a-z] or [A-Z]
 * @n: The character to verifie
 *
 * Return: 1 if 'c' is in lowercase or uppercase, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return (1);
	}
	else if (n == 0)
	{
		printf("0\n");
		return (0);
	}
	else if (n < 0)
	{
		printf("-\n");
		return (-1);
	}
}
