#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: to separate arguments by a coma
 * @n: number of arguments
 *
 * Return: Always nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list boite;
	char *stock;

	va_start(boite, n);

	for (i = 0; i < n; i++)
	{
		stock = va_arg(boite, char *);

		if (stock == NULL)
			printf("(nil)");
		else
			printf("%s", stock);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(boite);

	printf("\n");
}
