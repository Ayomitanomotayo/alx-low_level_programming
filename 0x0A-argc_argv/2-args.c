#include <stdio.h>
#include "main.h"

/**
 * main - the reference argument
 * @argc: input arguments
 * @argv: output string
 *
 * Return: Always o
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
