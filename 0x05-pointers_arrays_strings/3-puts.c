#include "main.h"

/**
 * _puts - Command to insert strings
 *@str: string to print to stdout
 *
 * Return: Always success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
