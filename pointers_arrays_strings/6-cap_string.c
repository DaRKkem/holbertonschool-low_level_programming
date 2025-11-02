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

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 'a' || str[i - 1] > 'z')
			{
				if (str[i - 1] < 'A' || str[i - 1] > 'Z')
				{
					if (str[i - 1] < '0' || str[i - 1] > '9')
					{
						str[i] -= 'a' - 'A';
					}
				}
			}
		}
		i++;
	}
	return (str);
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
	str[] = "hello world! expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world";
	ptr = cap_string(str);
    printf("%s", ptr);
	str[] = "HELLO WORLD! expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world";
	ptr = cap_string(str);
    printf("%s", ptr);
	str[] = "-- expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	ptr = cap_string(str);
    printf("%s", ptr);

    return (0);
}