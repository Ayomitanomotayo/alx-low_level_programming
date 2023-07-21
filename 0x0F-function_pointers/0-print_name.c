#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *
 *
 *
 *
 *
 */
void print_out_name(char *name)
{
        {
        printf("%s", name);
        }
	void print_name(char *name, void (*f)(char *))
	{
		f(name);
	}
}
