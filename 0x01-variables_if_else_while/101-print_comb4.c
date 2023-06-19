#include<stdio.h>
/**
 * main - Printing combination of 3 digit number
 *
 * Return: Always success
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int num3 = 2;

	while (num1 <= 7)
	{
		while (num2 <= 8)
		{
			while (num3 <= 9)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 != 7 || num2 != 8 || num3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
			num3 = num2 + 1;
		}
		num1++;
		num2 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
