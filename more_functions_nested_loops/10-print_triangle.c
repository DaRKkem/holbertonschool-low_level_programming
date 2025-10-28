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
	if (size <= 0)
	{
		_putchar('\n');
	}

	int tmp = size;

	while (size > 0)
	{
		int n = size - 1;
		while (n > 0)
		{
			_putchar(' ');
			n--;
		}

		n = 0;
		while (n < (tmp - (size - 1)))
		{
			_putchar('#');
			n++;
		}
		_putchar('\n');
		size--;
	}
}

int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
