#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments (unused)
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
