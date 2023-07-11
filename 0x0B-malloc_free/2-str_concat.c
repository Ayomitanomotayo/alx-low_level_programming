#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - Function to concatenate string
 *@s1: the first string
 *@s2: The second string
 *
 * Return: Always success
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	size_t size = strlen(s1) + strlen(s2) + 1;

	dest = (char *)malloc(sizeof(char) * size);
	if (dest == NULL)
		return (NULL);
	strcpy(dest, s1);
	strcat(dest, s2);
	return (dest);
}
