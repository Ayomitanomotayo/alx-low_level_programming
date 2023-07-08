#include "main.h"
/**
 *puts - put string to the stdoutput
 *@str: pointer to string to print
 *
 *Return: Alwatys success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
