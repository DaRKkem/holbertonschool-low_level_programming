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
	va_list args;
	int i = 0, printed = 0;
	char *s;

	va_start(args, format);

	if (format) /* 1st IF */
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printed && printf(", "); /* prints comma if needed */
					printf("%c", va_arg(args, int));
					printed = 1;
					break;
				case 'i':
					printed && printf(", ");
					printf("%d", va_arg(args, int));
					printed = 1;
					break;
				case 'f':
					printed && printf(", ");
					printf("%f", va_arg(args, double));
					printed = 1;
					break;
				case 's':
					printed && printf(", ");
					s = va_arg(args, char *);
					printf("%s", s ? s : "(nil)");
					printed = 1;
					break;
			}
			i++;
		}
	}

	va_end(args);
	printf("\n");
}
