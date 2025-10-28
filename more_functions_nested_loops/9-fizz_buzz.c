#include "main.h"
#include <stdio.h>

/**
 * FizzBuzz -	prints the numbers from 1 to 100, but
 *				prints Fizz for multiples of three,
 *				prints Buzz for multiples of five,
 *				prints FizzBuzz for multiples of three and five
 *
 * main - Launches the FizzBuzz function
 *
 * Return: Always 0
 */
void FizzBuzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
}

int main(void)
{
	FizzBuzz();
	return (0);
}