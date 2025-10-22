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
	char c = '0';
	while (c <= 'f')
	{
		putchar(c);
		c++;
		if (c == '9')
		{
			c = 'a';
		}
	}
	putchar('\n');
	return (0);
}
