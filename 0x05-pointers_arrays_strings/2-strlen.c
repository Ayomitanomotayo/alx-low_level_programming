#include "main.h"
/**
 * _strlen - Counting the string lenght of a string
 * @s: String number
 *
 * Return: Always success
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
