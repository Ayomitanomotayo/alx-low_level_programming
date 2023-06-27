#include "main.h"

/**
 * swap_int - Swapping two variables using pointer
 * @a: The first variable
 * @b: The second variable
 *
 * Return: Always success
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
