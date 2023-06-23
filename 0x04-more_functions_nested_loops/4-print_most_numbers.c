#include "main.h"
/**
 * print_most_numbers - printing numbers to exclude 2 and 4
 *
 * Return: Always success
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch != 2 && ch != 4)
			_putchar('0' + ch);
	}
	_putchar('\n');
}
