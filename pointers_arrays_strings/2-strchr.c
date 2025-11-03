#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to locate in 's'
 *
 * Return: The pointer of the first occurence or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
