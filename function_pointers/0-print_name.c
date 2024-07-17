#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name
 * @name: name to print
 * @f: print fuction
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name == NULL && f == NULL))
	{
		f(name);
	}
}
