#include "main.h"
/**
 *_pow_recursion - Printing the power of a number recursively
 *@x: The number base
 *@y: The power number
 *
 *Return: Always actual power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);/*returning anything raised to power 0 as negative*/
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
