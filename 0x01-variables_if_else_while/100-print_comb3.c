#include<stdio.h>
/**
 * main - printing combinations of two digits
 *
 * Return: Always 0;
 */
int main(void)
{
	int zeros = 0;
	int ones = 1;

	while (zeros < 9)
	{
		while (ones <= 9)
		{
			putchar('0' + zeros);
			putchar('0' + ones);
			if(zeros != 8 || ones != 9)
			{
			putchar(',');
			putchar(' ');
			}
			ones++;
		}
		zeros++;
		ones = zeros + 1;
	}
	putchar('\n');
	return (0);
}
