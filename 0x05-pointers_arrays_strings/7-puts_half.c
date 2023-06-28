#include "main.h"
/**
 * puts_half - rinting half of  string
 * @str: string to print
 *
 * Return: Always success
 */
void puts_half(char *str)
{
	char lenght = *str;
	int incre = 0;

	while (incre < lenght / 2)
	{
		_putchar(str[incre]);
		incre++;
	}
	_putchar('\n');
}
