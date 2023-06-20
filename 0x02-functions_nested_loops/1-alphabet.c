#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - printing strings
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
