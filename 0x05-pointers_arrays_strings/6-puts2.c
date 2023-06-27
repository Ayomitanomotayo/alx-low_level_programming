#include "main.h"
/**
 * puts2 - printing strings
 * @str: pointer tp be printed
 *
 * Return: Always success
 */
void puts2(char *str)
{
	int increment = 0;

	while (str[increment] != '\0')
	{
		_putchar(str[increment]);
		increment += 2;
	}
	_putchar('\n');
}
