#include "main.h"
/**
 *strcpy - string copy
 *@: destintion string
 *@src: Source string
 *
 * Return: Always success
 */
char *strcpy(char *dest, const char *src)
{
	char *originalDest = dest;
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0\0';
	return (originalDest);
}
