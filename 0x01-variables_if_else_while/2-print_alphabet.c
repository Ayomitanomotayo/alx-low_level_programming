#include<stdio.h>
/**
 * main - Printing alphabets lower letters
 *
 * Return: Always success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
