#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 * @i: Loops through 24
 * @j: Loops through 60
 *
 * Return: the value of the last digit of the number 'n'
 */
void jack_bauer(void)
{
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			_putchar((i - (i % 10)) / 10 + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j - (j % 10)) / 10 + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
