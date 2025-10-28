#include "main.h"
#include <stdio.h>

/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: the string
 *
 * Return: Always nothing.
 */
void print_rev(char *s)
{
	char *str;
	int i = _strlen(s);
	printf("%d", i);
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
