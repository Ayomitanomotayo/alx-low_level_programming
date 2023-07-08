#include "main.h"
#include "stddef.h"
/**
 *strpbrk - string break
 *@str1: seraching for the occurence of string 1
 *@str2: Sarching for the occurence of string 2
 *
 * Return: Always success
 */
char *strpbrk(const char *str1, const char *str2)
{
	while (*str1)
	{
	const char *p = str2;

	while (*p)
	{
	if (*p == *str1)
	{
	return ((char *) str1);
	}
	p++;
	}
	str1++;
	}
	return (NULL);
}
