#include "main.h"

/**
* main - print _putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char t[] = "_putchar";
	int i;

	for (i = 0; t[i] != '\0'; i++)
	{
		_putchar(t[i]);
	}
	_putchar('\n');
	return (0);
}
