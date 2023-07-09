#include "main.h"
#include <stdio.h>
/**
 *main - Entry point of progrm
 *@argc: Number of rguments
 *@argv: Arrays/strings passed into an argument
 *
 * Return: llways success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
