#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - get operation functions
 * @s: operator
 *
 * Return: corresponding operation function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	for (i = 0; i < (int)sizeof(ops); i++)
	{
		if ((ops[i].op == s[0]) && (s[1] == '\0'))
		{
			return (ops[i].f);
		}
	}

	return (0);
}