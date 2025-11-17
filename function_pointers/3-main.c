#include <stdio.h>

/**
 * main - the main function
 *
 * Return: Always 0.
 */
int main()
{
	int a = 1, b = 1;
	int res = get_op_function('+', a, b);

	printf("%d + %d = %d", a, b, res);

	a = 97;
	res = get_op_function('+', a, b);
	printf("%d + %d = %d\n", a, b, res);

	a = 1024, b = 10;
	res = get_op_function('/', a, b);
	printf("%d / %d = %d\n", a, b, res);

	b = 98;
	res = get_op_function('*', a, b);
	printf("%d * %d = %d\n", a, b, res);

	res = get_op_function('\*', a, b);
	printf("%d * %d = %d\n", a, b, res);

	res = get_op_function('-', a, b);
	printf("%d - %d = %d\n", a, b, res);

	res = get_op_function('%', a, b);
	printf("%d % %d = %d\n", a, b, res);

	return (0);
}
