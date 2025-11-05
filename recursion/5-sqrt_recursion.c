#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @x: the number to find the square root
 *
 * Return: The square root of 'n' or -1
 */
int helper(int n, int i)
{
	if (i * i == n)
		return i;
	if (i * i > n)
		return -1;
	return helper(n, i + 1);
}

int _sqrt_recursion(int n)
{
	return helper(n, 0);
}
