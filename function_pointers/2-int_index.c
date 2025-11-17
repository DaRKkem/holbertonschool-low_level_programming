#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to use
 * @size: the size of the array
 * @cmp: pointer to the function to use
 *
 * Return: NULL or the first index of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
