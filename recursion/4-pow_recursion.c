#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _pow_recursion - returns the value of 'x' raised to the power of 'y'
 * @x: the number to raise
 * @y: the power to use to raise 'x'
 *
 * Return: The value of x^y or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y > 0)
		{
			return (_pow_recursion(x, y - 1) * x);
		}
	}
	return (1);
}
