#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to check
 * @needle: the string to check in 'haystack'
 *
 * Return: The pointer of the first iteration of 'needle' in 'haystack'
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
