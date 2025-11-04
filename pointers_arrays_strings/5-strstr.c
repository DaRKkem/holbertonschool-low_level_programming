#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strstr - locates a substring
 * @s: the string
 * @needle: the number of bytes
 *
 * Return: The number of bytes in the initial segment of s
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    if (*needle == '\0')
        return (haystack);

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (needle[j] == '\0')
            return (haystack + i);
    }

    return (NULL);
}
