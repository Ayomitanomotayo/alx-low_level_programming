#include <stdio.h>
#include "main.h"
/**
 *main - program entry point
 *@argc: Printing name of program to terminal
 *@argv: Printing value
 *
 * Return: Always success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
