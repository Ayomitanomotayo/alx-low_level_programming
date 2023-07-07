#include "main.h"
#include "stddef.h"
/**
 *strstr - substring
 *@haystack: First string
 *@needle: second sunstring
 *
 *Return: Always success
 */

char *strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0') {
	return (char *)haystack;
	}
	const char *p1 = haystack;
	while (*p1 != '\0') {
	const char *p1_temp = p1;
	const char *p2 = needle;
	while (*p1_temp != '\0' && *p2 != '\0' && *p1_temp == *p2) {
	p1_temp++;
	p2++;
	}
	if (*p2 == '\0') {
	return (char *)p1;
        }
	p1++;
	}
	return (NULL);
}
