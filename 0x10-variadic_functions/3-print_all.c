#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - A variadic function that prints all types
 *@*: pointer to all types
 *@format: The first argument
 *@...: Elipse variadic arguments
 * Return: Always success
 */
void print_all(const char * const format, ...)
{
	const char *first_format = format;
	va_list args;

	va_start(args, format);
	while (*format)
	{
	if (*format == 'c')
	{
	putchar(va_arg(args, int));
	}
	else if (*format == 'i')
	{
	printf("%d", va_arg(args, int));
	}
	else if (*format == 'f')
	{
	printf("%f", va_arg(args, double));
	}
	else if (*format == 's')
	{
	const char *str = va_arg(args, const char*);

	printf("%s", str ? str : "(nil)");
	}
	first_format++;
	if (*first_format)
	printf(", ");
	}
	va_end(args);
	printf("\n");
}
