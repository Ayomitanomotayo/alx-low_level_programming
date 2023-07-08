#include "main.h"
#include "stddef.h"
#include "string.h"
/**
 *strncat - Cantenate stirngs
 *@dest: destination string
 *@src: source string
 *@n: number to concatenatee
 *
 * Return: Always succes
 */
char *strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
