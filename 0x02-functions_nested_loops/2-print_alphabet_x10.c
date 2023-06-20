#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - printinstrings in ten rows
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		num++;
	}
}
