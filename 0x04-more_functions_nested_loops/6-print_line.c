#include "main.h"
/**
 * print_line - printing line on terminal
 *@n: number to print
 *
 * Return: Always o
 */

void print_line(int n)
{
	if (n > 0)
	{
	int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
