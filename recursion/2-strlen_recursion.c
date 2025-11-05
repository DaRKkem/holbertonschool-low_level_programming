#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen_recursion - returns the length of a string by using recursion
 * @s: the string to use in recursion
 *
 * Return: Always nothing.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
