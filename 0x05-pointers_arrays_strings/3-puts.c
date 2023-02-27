#include "main.h"
/**
 * _puts -prints astring, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\o')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
