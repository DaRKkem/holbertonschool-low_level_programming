#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: Always nothing.
 */
char *cap_string(char *str)
{
	int i = 0;
	char *p = str[i];

	while (str[i] != '\0')
	{
		if (p)
		{
			return 'i';
		}
	}
	return (str);
}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}