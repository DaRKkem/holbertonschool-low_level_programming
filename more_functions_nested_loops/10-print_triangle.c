#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: Always nothing.
 */
void print_triangle(int size)
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
