#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: Always nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		if (str[i + 1] != '\0')
		{
			i = i + 2;
		}
		else
		{
			i++;
		}
	}
	i = '\0';
	printf("%c\n", str[i]);
	write(1, "\n", 1);
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}