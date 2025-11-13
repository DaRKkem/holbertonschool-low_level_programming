#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strdup - returns a pointer to a new string (duplicate a string)
* @str: string to duplicate
*
* Return: NULL or pointer to the new string
*/

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	while (str[i] != '\0')
		i++, len++;

	copy = malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
/*zdzdz*/