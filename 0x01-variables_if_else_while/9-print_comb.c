#include<stdio.h>

/**
 * main - printing combination of one digit number
 *
 * Return: Always sucess
 */
int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		putchar('0' + ch);
			if (ch < 9)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
