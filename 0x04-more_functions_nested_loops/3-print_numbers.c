#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9
 * Return: no return
 */
void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	putchar('\n')
}
