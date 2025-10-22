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
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
char C = 'A';
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
