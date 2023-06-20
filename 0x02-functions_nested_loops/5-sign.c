#include "main.h"
/**
 * print_sign - printing symbols
 * @n: Value being checked for
 *
 * Return: when pos 1, whe neg -1, when zero 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
