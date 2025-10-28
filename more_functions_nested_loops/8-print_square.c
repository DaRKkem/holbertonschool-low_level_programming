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
	if (size <= 0)
	{
		_putchar('\n');
	}

	int i = 0;
	int i2 = 0;
	while (i < size)
	{
		i2 = 0;
		while (i2 < size)
		{
			_putchar('#');
			i2++;
		}
		_putchar('\n');
		i++;
	}
}
