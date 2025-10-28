#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the length
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	int tmp = n;

	while (n > 0)
	{
		int n2 = tmp - n;

		while (n2 > 0)
		{
			_putchar(' ');
			n2--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
