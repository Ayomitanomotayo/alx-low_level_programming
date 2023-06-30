#include "main.h"
/**
 *_strncat - Concatinating strings using strcat
 *@dest: Destination string
 *@src: Source
 *@n: mximum of character
 *
 * Return: Alwys success
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	ptr = '\0';
	return (dest);
}
