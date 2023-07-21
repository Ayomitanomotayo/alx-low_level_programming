#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - A function that prints name
 *@name: String that will be printed
 *@f: Pinter to function of argument to be executed
 *
 *Return: Always success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
		f(name);
}
