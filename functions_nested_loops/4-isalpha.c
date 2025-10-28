#include "main.h"

/**
 * _islower - checks if a character is in scope [a-z]
 * @c: The character to verifie
 *
 * Return: 1 if 'c' is in lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
