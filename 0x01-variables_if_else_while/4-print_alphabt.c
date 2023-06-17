#include<stdio.h>
/**
 * main - printing lower case letter with the exemption of q and e
 *
 * Return: Always success
 */
int main(void)
{
	char ch = 'a';

		while (ch <= 'z')
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		ch++;
		}
		putchar('\n');
		return (0);
}
