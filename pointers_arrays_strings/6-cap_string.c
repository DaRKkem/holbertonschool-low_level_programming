#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: Always nothing.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 'a' || str[i - 1] > 'z')
			{
				if (str[i - 1] < 'A' || str[i - 1] > 'Z')
				{
					if (str[i - 1] != '-' && (str[i - 1] < '0' || str[i - 1] > '9'))
					{
						str[i] -= 'a' - 'A';
					}
				}
			}
		}
		i++;
	}
	return (str);
}
