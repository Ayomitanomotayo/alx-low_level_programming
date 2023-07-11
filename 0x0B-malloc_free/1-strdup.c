#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - A function used to return pointer to new allocated memory space
 *@str: Former memory space
 *
 *Return: Always success 0
 */
char *_strdup(char *str)
{
	char *s;
	size_t size;

	if (str == NULL)
		return (NULL);
	size = strlen(str) + 1;
	s = (char *) malloc(sizeof(char) * size);
	if (s == NULL)
	return (NULL);
	strcpy(s, str);
	return (s);
}
