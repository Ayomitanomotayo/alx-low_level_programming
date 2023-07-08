#include "main.h"
/**
 *strlen - printing string leght
 *@str: pointer to string
 *
 * Return: Always sucess
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
	lenght++;
	s++;
	}
	return (lenght);
}
