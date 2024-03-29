#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Selects the correct function for operation
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
