#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 * Return: Always nothing
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;

			if (x < 10)
			{
				_putchar(' ');
				_putchar(x + '0');
			}

			else
			{
				_putchar((x - (x % 10)) / 10 + '0');
				_putchar((x % 10) + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
