#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: array to use
 * @size: the size of the array
 * @action: pointer to the function to use
 *
 * Return: Always nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
