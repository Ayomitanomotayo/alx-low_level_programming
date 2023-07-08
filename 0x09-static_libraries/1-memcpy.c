#include "main.h"
#include "stddef.h"
/**
 *memcpy - copying strings
 *@dest: destintion
 *@src: source
 *@n: integer
 *
 * Return: Always sucess
 */
void *memcpy(void *dest, const void *src, size_t n)
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	while (n--)
	{
	*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
