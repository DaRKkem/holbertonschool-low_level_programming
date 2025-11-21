#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - printf everything
 * @format: list of types of arguments passed to the function (c, i, f, s)
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list boite;
	int i = 0;
	int printed = 0;  /* becomes 1 after first successful print */
	char *stock;

	va_start(boite, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			if (printed)
				printf(", ");
			printf("%c", va_arg(boite, int));
			printed = 1;
			break;

		case 'i':
			if (printed)
				printf(", ");
			printf("%d", va_arg(boite, int));
			printed = 1;
			break;

		case 'f':
			if (printed)
				printf(", ");
			printf("%f", va_arg(boite, double));
			printed = 1;
			break;

		case 's':
			if (printed)
				printf(", ");
			stock = va_arg(boite, char *);
			printf("%s", stock ? stock : "(nil)");
			printed = 1;
			break;
		}

		i++;
	}

	va_end(boite);
	printf("\n");
}
