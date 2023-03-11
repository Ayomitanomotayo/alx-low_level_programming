#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - A protoype function
 * @c: the character.
 *
 * Return: Always success
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
