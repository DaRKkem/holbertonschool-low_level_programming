#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix of int
 * @a: the pointer to array
 * @size: size of a side of the squared matrix
 *
 * Return: Always nothing.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, n1 = 0, n2 = 0;

	while (i < size)
	{
		n1 += a[i * size + i];
		n2 += a[i * size + i + (size - 1 - i - i)];
		i++;
	}
	printf("%d, ", n1);
	printf("%d\n", n2);
}
