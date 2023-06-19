#include<stdio.h>
/**
 * main - pinting hexadecimal
 *
 * Return: always success
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	num = 10;
	while (num <= 15)
	{
		putchar(num + 'a' - 10);
		num++;
	}
	putchar('\n');
	return (0);
}
