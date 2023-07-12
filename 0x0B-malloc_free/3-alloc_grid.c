#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - Function for Printing grids
 *@width: the rows
 *@height: The columb
 *
 * Return: Always succes
 *
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);
		if (array == NULL)
		{
			return (NULL);
		}
	for (a = 0; a < height; a++)
	{
	array[a] = (int *)malloc(sizeof(int) * width);
	if (array[a] == NULL)
	{
		for (b = 0; b < a; b++)
	{
		free(array[b]);
	}
	free(array);
	return (NULL);
	}
	for (b = 0; b < width; b++)
	{
		array[a][b] = 0;
	}
	}
	return (array);
}
