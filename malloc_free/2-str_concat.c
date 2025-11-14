#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings into newly allocated memory
 * @s1: first string to add
 * @s2: second string to add
 *
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int leng1, leng2;
	char *result;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (leng1 = 0; s1[leng1] != '\0'; leng1++)
	;

	for (leng2 = 0; s2[leng2] != '\0'; leng2++)
	;

	result = malloc((leng1 + leng2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		result[leng1 + i] = s2[i];
		i++;
	}

	result[leng1 + leng2] = '\0';
	return (result);
}
