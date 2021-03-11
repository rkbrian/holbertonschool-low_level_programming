#include <stdio.h>

/**
 * get_op_func - function to select operator
 * @s: string
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
	int i;

	i = 0;
	while (i < 5)
	{
		i++;
		if (ops[i][0] == *s && sizeof(s) == sizeof(char))
		{
			return (ops[i]);
		}
	}
}
