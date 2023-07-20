#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function that sums numbers
 *n: The first argument of a varidic function
 *
 *Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	va_start (args, n);
	if (n == 0)
	return (0);
	for (i = 0; i < n; i++)
	{
	int first_args = va_arg(args, int);
	sum += first_args;
	}
	va_end(args);
	return (sum);
}
