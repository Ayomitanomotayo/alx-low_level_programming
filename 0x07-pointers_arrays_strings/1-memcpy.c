#include "main.h"
/**
 * _memcpy - a function that copies n byte.
 * @dest: file to copy code.
 * @src: source file.
 * @n: the integer value or number.
 *
 * Return: the copied file
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int z;

	i = 0;
	z = n;
	for (; i < z; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
