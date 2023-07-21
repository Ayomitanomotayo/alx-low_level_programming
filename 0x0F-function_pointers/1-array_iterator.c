#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - Function to print name
 *@array: function tom pointer of the first argument
 *@size: size of the array
 *@action: Function to pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
	return;
	}
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
