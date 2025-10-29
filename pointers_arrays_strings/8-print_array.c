#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the string
 * @n: the number of int in 'a' to display starting from 1
 *
 * Return: Always nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		while (i < n)
		{
			printf("%d", a[i]);
			i++;
			if (i < n)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
