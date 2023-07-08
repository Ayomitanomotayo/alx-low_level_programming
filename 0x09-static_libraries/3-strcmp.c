#include "main.h"
/**
 *strcmp: String compare
 *@str1: poniter to first string
 *@str2: [ointer to second string
 *
 * Return: Alwats succes
 */
int strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
	str1++;
	str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
