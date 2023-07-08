#include "main.h"
#include "stdio.h"
/**
 *puts - put string to the stdoutput
 *@str: pointer to string to print
 *
 *Return: Alwatys success
 */
int puts(const char *str)
{
	int result = fputs(str, stdout);

	if (result != EOF)
	{
	putc('\n', stdout);
	}
	return (result);
}
