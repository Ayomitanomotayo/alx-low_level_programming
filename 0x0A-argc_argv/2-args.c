#include <stdio.h>
#include "main.h"

/**
 *main - entry point of the program
 *@argc: argumnt to count number of program name
 *@argv: Strings to be checked
 *
 *Return: Always sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf ("%s\n", argv[i]);
	}
	return (0);
}
