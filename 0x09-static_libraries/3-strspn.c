#include "main.h"
#include "string.h"
/**
 *strspn - string span
 *@str1: Pointer to the first string
 *@str2: poniter to the second string
 *
 * Return: Always succes
 */
size_t strspn(const char *str1, const char *str2)
{
	const char *s1 = str1;
	const char *s2;

	while (*s1)
	{
	for (s2 = str2; *s2; s2++)
	{
	if (*s1 == *s2)
	break;
	}
	if (!*s2)
	break;
	s1++;
	}
	return ((size_t)(s1 - str1));
}
