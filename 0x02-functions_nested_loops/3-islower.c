#include "main.h"
/**
 * _islower - printing lower case number in isolation
 *@c: character to print
 *
 * Return: 1 Always success otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
