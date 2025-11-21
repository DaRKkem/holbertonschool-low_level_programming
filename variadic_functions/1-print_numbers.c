#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
* @separator: to separate arguments by a coma
* @n: number of arguments
*
* Return: Always nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	int stock;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		stock = va_arg(args, int);

		if (i > 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", stock);
	}
	va_end(args);
	printf("\n");
}
