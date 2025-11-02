#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: the string
 *
 * Return: The new string.
 */
char *string_toupper(char *tab)
{
	int i = 0;

	while (tab[i] != '\0')
	{
		if (tab[i] >= 'a' && tab[i] <= 'z')
		{
			tab[i] -= 'a'-'A';
		}
		i++;
	}
	return (tab);
}
