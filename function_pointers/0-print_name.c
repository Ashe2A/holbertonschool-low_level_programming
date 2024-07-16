#include <stdio.h>
#include "main.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: print fuction
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
