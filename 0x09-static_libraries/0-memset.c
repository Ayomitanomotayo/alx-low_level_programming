#include "main.h"
/**
 *memset - set number
 *@s: pointer to value
 *@b: integer value
 *@n: number to cet
 *
 * Return: Always sucess
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
