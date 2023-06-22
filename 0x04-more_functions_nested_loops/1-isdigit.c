#include "main.h"

/**
 * _isdigit - checking for digits
 *@c: Digitto check for
 *
 * Return: Always success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
