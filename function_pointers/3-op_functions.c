#include <stdio.h>

/**
 * op_add - returns the sum of a and b
 * @a: the first int to use
 * @b: the second int to use
 *
 * Return: -1 or the sum of a and b
 */
int op_add(int a, int b)
{
	if (a == NULL || b == NULL)
		 return (-1);
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: the first int to use
 * @b: the second int to use
 *
 * Return: -1 or the difference of a and b
 */
int op_sub(int a, int b)
{
	if (a == NULL || b == NULL)
		return (-1);
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: the first int to use
 * @b: the second int to use
 *
 * Return: -1 or the product of a and b
 */
int op_mul(int a, int b)
{
	if (a == NULL || b == NULL)
		return (-1);
	return (a * b);
}

/**
 * op_div - returns the division of a and b
 * @a: the first int to use
 * @b: the second int to use
 *
 * Return: -1 or the division of a and b
 */
int op_div(int a, int b)
{
	if (a == NULL || b == NULL)
		return (-1);
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a and b
 * @a: the first int to use
 * @b: the second int to use
 *
 * Return: -1 or the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (a == NULL || b == NULL)
		return (-1);
	return (a % b);
}