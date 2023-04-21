#include "3-calc.h"

/**
 * get_op_func - pointer to function that selects the correct operation
 * @s: operator passed
 *
 * Return: a pointer to the function that corresponds the operator given
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (get_op_func && s)
	{
		while (ops[i].symbol != NULL && strcmp(ops[i].symbol, s != 0))
			i++;
	}
	return (ops[i].func);
}
