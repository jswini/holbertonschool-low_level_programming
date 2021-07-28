#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets the operator and calls the proper function
 * @s: operator passed
 *
 * Return: pointer to correct op_func if success, NULL if fail
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if ((ops[i].op[0] == *s) && (s[1] == '\0'))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
