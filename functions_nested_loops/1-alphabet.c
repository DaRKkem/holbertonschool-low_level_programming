#include "main.h"

/**
 * print_alphabet - prints all the alphabet in lowercase
 * 
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
