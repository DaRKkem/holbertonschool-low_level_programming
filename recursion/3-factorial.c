#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * factorial - returns the factorial of a given number
 * @n: the number given
 *
 * Return: The factorial of the number 'n' or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n > 0)
		{
			return (factorial(n - 1) * n);
		}
	}
	return (1);
}
