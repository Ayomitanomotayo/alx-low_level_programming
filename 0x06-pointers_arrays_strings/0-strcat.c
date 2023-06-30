#include "main.h"
/**
 *_strcat - Function to concatenate strings
 *@dest: destination string
 *@src: Source string
 *
 * Return: Alays success
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

		while (*dest_ptr != '\0')
		{
			dest_ptr++;
		}
		while (*src != '\0')
		{
			*dest_ptr = *src;
			src++;
			dest_ptr++;
		}
		*dest_ptr = '\0';
		return (dest);
}
