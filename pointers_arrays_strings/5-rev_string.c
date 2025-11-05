#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: Always nothing.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char list[1024];

	while (s[i] != '\0')
	{
		list[i] = s[i];
		i++;
	}
	list[i] = '\0';
	i--;

	while (list[j] != '\0')
	{
		list[j] = s[i];
		j++;
		i--;
	}
	i = 0;

	while (i < j)
	{
		s[i] = list[i];
		i++;
	}
}
