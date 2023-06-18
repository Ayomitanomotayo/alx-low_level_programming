#include<stdio.h>
/**
 * main - pinting hexadecimal 
 *
 * Return: always success
 */
int main(void)
{
	int num = 0;
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
