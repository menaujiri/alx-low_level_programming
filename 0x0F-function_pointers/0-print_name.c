#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - to print name
 * @name: to name the print
 * @f: the function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
