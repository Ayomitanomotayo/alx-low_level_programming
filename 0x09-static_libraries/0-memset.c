#include "main.h"
#include "stddef.h"
/**
 *memset - set number
 *@ptr: pointer to value
 *@value: integer value
 *@num: number to cet
 *
 * Return: Always sucess
 */
void *memset(void *ptr, int value, size_t num)
{
	unsigned char *p = ptr;
	unsigned char val = (unsigned char)value;

	for (size_t i = 0; i < num; i++)
	{
	p[i] = val;
	}
	return (ptr);
}
