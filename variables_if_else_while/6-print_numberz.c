#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print the hole alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
