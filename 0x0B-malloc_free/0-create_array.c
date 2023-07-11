#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Function to create an array of char
 *@size: number of memory to print
 *@c: array character printed
 *
 * Return: Always succes
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(sizeof(char) * size);
	if (array == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
