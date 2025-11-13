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
	int i;

	copy = malloc(4 * sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
/*coucodu*/