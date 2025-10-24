#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabet in lowercase 10 times
 *
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
