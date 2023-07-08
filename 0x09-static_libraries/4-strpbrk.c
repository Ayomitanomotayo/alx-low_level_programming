#include "main.h"
/**
 *strpbrk - string break
 *@s: seraching for the occurence of string 1
 *@accept: Sarching for the occurence of string 2
 *
 * Return: Always success
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	return (s);
	}
	s++;
	}
	return ('\0');
}
