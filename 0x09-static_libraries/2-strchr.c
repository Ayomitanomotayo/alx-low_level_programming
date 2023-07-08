#include "main.h"
#include "stddef.h"
/**
 *strchr - string count
 *@str: pointer to string
 *@c: character to count
 *
 *Return: Always success
 */
char *strchr(const char *str, int c)
{
	while (*str != '\0')
	{
	if (*str == c)
	{
	return ((char *) str);
	}
	str++;
	}
	if (c == '\0')
	{
	return ((char *) str);
	}
	return (NULL);
}
