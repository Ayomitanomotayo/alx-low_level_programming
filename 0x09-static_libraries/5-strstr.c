#include "main.h"
/**
 *strstr - substring
 *@haystack: First string
 *@needle: second sunstring
 *
 *Return: Always success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *l = haystack;
	char *p = needle;

	while (*l == *p && *p != '\0')
	{
	l++;
	p++;
	}
	if (*p == '\0')
	return (haystack);
	}
	return (0);
}
