#include "main.h"
/**
 *strspn - string span
 *@s: Pointer to the first string
 *@accept: poniter to the second string
 *
 * Return: Always succes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int o;

	while (*s)
	{
	for (o = 0; accept[o]; o++)
	{
	if (*s == accept[o])
	{
	n++;
	break;
	}
	else if (accept[o + 1] == '\0')
	return (n);
	}
	s++;
	}
	return (n);
}
