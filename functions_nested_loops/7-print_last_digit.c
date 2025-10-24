#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to print and to return
 *
 * Return: the value of the last digit of the number 'n'
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n -= 2 * n;
	}
	_putchar(n + '0');
	return (n);
}
