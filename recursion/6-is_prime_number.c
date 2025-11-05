#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * helper - returns 1 if is a prime number, else returns 0
 * @n: the number to test if is prime or not
 * @i: the index
 *
 * Return: 1 or 0
 */
int helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if is a prime number, else returns 0
 * @n: the number to test if is prime or not
 *
 * Return: 1 or 0
 */
 int is_prime_number(int n)
{
	return (helper(n, 2));
	return (0);
}