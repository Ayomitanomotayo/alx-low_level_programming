#include<stdio.h>
/**
 * main - printing lowercase alphabet in reverse order
 *
 * Return: Always succes
 */

int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
