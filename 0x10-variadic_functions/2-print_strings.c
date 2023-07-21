#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - A function to output string and seperator
 *@separator: Pointer to seperator that will be printed
 *@n: The first arguments passed to the variadic function
 *
 * Return: Always success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	const char *first_arg = va_arg(args, const char*);

	if (first_arg == NULL)
	{
	printf(("nil"));
	}
	else
	{
	printf("%s", first_arg);
	}
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");
}
