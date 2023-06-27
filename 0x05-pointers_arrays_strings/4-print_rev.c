#include "main.h"
/**
 * print_rev - printing reverse strings
 * @s: string to print
 *
 * Return: lways success
 */

void print_rev(char *s)
{
	int lenght = 0;
	char *str = s;

	while (*str != '\0')
	{
		lenght++;
		str++;
	}
	while (lenght > 0)
	{
		str--;
		_putchar(*str);
		lenght--;
	}
	_putchar('\n');
}
