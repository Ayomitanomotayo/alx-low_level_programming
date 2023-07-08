#include "main.h"
/**
 *isalpha - Checking for lower case and upper case alphbets
 *@c: Alphabets checked
 *
 * Return: Always success
 */
int isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
