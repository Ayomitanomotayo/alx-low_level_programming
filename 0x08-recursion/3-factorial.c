#include "main.h"

/**
 *factorial - printing factorial ofa number recursively
 *@n: number to print
 *
 * Return: Always success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
