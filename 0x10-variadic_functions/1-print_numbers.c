#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - A function to print numbers with seperator
 *@separator: pointers to char to Provides spaces and puntuation
 *@n: Takes in the first argument
 *
 *Return: Always success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	int first_arg = va_arg(args, int);

	printf("%d", first_arg);
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");
}
