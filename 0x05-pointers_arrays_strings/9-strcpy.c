#include "main.h"
/**
 * _strcpy - String copy
 * @dest: Save string as temp
 * @src: Sorce
 *
 * Return: Always sucess
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (original_dest);
}
