#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: first number to use
* @max: second number to use
*
* Return: NULL or a new pointer
*/
int *array_range(int min, int max)
{
	int *ptr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));
		if (ptr == NULL)
			return (NULL);

	for (i = 0; i < size; i++)
	ptr[i] = min + i;

	return (ptr);
}
