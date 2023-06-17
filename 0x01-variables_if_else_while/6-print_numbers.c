#include<stdio.h>
/**
 * main - printing digit 0-9
 *
 * Return: Always success
 */

int main(void)
{
        int num = 0;

        while (num < 10)
        {
                putchar('0' + num);
                        num++;
        }
        putchar('\n');
        return (0);
}
