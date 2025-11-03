#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: the string
 *
 * Return: The new string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}
