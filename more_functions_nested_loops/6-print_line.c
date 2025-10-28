#include "main.h"
#include <stdio.h>

/**
 * print_line - prints 10 times the numbers, from 0 to 14
 * @n: the character to choose the length
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
