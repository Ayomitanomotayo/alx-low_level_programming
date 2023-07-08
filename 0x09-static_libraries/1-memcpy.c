#include "main.h"
/**
 *memcpy - copying strings
 *@dest: destintion
 *@src: source
 *@n: integer
 *
 * Return: Always sucess
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
