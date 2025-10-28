#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integer
 * @a: the 1st character to switch
 * @b: the 2nd character to switch
 *
 * Return: Always nothing.
 */
void swap_int(int *a, int *b)
{
	int a2 = *a;
	int b2 = *b;
	*a = b2;
	*b = a2;
}
