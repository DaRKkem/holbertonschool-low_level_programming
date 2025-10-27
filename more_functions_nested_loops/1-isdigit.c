#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for uppercase character
 * @c: the caracter to verifie
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
