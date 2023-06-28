#include <stdio.h>
#include "main.h"

/**
 * print_array - Printing list of arrays to stdoupt
 * @a: wwhere the arrays are stored
 * @n: the number of arry stored
 *
 * Return: Always success
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
