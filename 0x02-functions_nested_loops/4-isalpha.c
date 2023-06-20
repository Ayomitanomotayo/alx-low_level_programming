#include "main.h"
/**
 * _isalpha - Checking for alphabetic character
 * @c: character to check for
 *
 * Return: Always success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
