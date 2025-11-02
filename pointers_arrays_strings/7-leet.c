#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * leet - encodes a string into 1337
 * @str: the string
 *
 * Return: The new string.
 */
char *leet(char *str)
{
	int i = 0, j = 0;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;

		while (letters[j] != '\0')
		{
			if (str[i] == letter[j])
			{
				str[i] = numbers[j];
			}
		}
		i++;
	}
	return (str);
}
