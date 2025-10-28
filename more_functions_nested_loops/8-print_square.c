#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (i < size)
	{
		int i2 = 0;

		while (i2 < size)
		{
			_putchar('#');
			i2++;
		}
		_putchar('\n');
		i++;
	}
}
