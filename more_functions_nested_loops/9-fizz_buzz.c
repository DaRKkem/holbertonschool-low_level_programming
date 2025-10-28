#include "main.h"
#include <stdio.h>

/**
 * FizzBuzz -	prints the numbers from 1 to 100, but
 *				prints Fizz for multiples of three,
 *				prints Buzz for multiples of five,
 *				prints FizzBuzz for multiples of three and five
 *
 * Return: Always 0.
 */
void FizzBuzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("FizzBuzz ");
			}
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
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
