#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - print the hole alphabet
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0 + '0';

	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
