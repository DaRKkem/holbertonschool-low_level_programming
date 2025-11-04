#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the pointer to array
 *
 * Return: The pointer of the first iteration of 'needle' in 'haystack'
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
