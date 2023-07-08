#include "main.h"
/**
 *strcat - concatenating strings
 *@dest: destination string
 *@scr: source string
 *
 * Return: Always sucess
 */

char *strcat(char *dest, const char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr)
	{
	dest_ptr++;
	}

	while (*src)
	{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
