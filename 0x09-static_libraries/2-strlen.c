#include "main.h"
#include "stddef.h"
/**
 *strlen - printing string leght
 *@str: pointer to string
 *
 * Return: Always sucess
 */
size_t strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
	length++;
	}
	return (length);
}
