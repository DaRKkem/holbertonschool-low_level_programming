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
char c = 'a';
char C = 'A';
while (c <= 'z' && c != '[')
{
	putchar(c);
	c++;
	if (c == 'z')
	{
		putchar(c);
		c = 'A';
	}
}
putchar('\n');
return (0);
}
