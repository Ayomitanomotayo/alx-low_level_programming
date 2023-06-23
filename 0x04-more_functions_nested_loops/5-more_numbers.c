#include "main.h"
/**
 * more_numbers - printing 1 to 14 ten times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int ch;
	int num;

	for (ch = 0; ch < 10; ch++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
				_putchar(' ');
		}
		_putchar('\n');
	}
}
