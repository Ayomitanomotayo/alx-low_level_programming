#include "main.h"
/**
 *strchr - string count
 *@str: pointer to string
 *@c: character to count
 *
 *Return: Always success
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		return (&s[a]);
	}
	return (0);
}
