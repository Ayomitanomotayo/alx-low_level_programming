#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - A function that takes 3 arguments to search for an int
 *@array: Pointer to an array of int
 *@size: The number of element to array
 *@cmp: POinter to function
 *
 * Return: Always success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
