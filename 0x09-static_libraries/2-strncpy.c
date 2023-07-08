#include "main.h"
#include "stddef.h"
/**
 *strncpy - String copy
 *@dest: destination string
 *@src: pointer to source string
 *@n: size of string to copy
 *
 * Return: Always sucess
 */
char *strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
