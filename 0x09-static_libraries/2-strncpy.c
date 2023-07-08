#include "main.h"
/**
 *strncpy - String copy
 *@dest: destination string
 *@src: pointer to source string
 *@n: size of string to copy
 *
 * Return: Always sucess
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[b] = src[b];
	b++;
	}
	while (b < n)
	{
	dest[b] = '\0';
	b++;
	}
	return (dest);
}
