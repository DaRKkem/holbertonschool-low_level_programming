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
	/*
	for(i = 0; *a[i] != '\0'; i++)
	{
		for(j = 0; *a[j] != '\0'; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(' ');
	}
		*/

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
