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
	int check = 1;
	char *stock;

	va_start(boite, format);

	if (format == NULL)
		{
			printf("\n");
			va_end(boite);
			return;
		}
	while (format[i] != '\0')
	{
		if (check == 0)
			printf(", ");
		check = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(boite, int));
			break;
		case 'i':
			printf("%d", va_arg(boite, int));
			break;
		case 'f':
			printf("%f", va_arg(boite, double));
			break;
		case 's':
				stock = va_arg(boite, char *);

				printf("%s", stock ? stock : "(nil)");
				break;
		}
		i++;
	}

	va_end(boite);

	printf("\n");
}
