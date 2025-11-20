#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func- performs simple operations (like a baby calculator)
 * @s: operator passed as argument
 * @a: the first int to use
 * @b: the second int to use
 *
 * Return: Error or the result
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

    op_t ops[] = {
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
		{NULL, NULL}};

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(ops[i], s) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
