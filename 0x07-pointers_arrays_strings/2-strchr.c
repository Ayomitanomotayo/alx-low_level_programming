#include "main.h"
/**
 * _strchr - locating character in a string.
 * @s: total strings
 * @c: character to locate
 *
 * Return: return a pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);

}
