#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - the main function
 * @argc: number of argurments
 * @argv: array of all arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, (*func)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		puts("Error");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		puts("Error");
		exit(100);
	}

	printf("%d\n", func(num1, num2));
	return (0);
}
