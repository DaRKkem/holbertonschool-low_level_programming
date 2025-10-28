#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the length
 *
 * Return: Always nothing.
 */
void print_diagonal(int n)
{
	int tmp = n;

	if (n <= 0)
	{
		_putchar('\n');
	}

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
