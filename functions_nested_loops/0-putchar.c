#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/* more headers goesthere */

/**
* main - print _putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char t[] = "_putchar";
	int i;

	for (i=0; t[i] != '\0'; i++)
	{
		_putchar(t[i]);
	}
	return (0);
}
