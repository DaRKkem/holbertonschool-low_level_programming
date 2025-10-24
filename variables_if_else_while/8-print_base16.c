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
	char c = '0';

	while (c <= 'f')
	{
		putchar(c);

		if (c == '9')
		{
			c = 'a' - 1;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
