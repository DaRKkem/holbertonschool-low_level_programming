#include "main.h"

/**
 * _isalpha - checks if a character is in scope [a-z] or [A-Z]
 * @c: The character to verifie
 *
 * Return: 1 if 'c' is in lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
