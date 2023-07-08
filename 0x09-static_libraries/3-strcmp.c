#include "main.h"
/**
 *strcmp: String compare
 *@s1: poniter to first string
 *@s2: [ointer to second string
 *
 * Return: Alwats succes
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}
