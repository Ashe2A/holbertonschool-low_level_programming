#include <stddef.h>

#ifndef WEEK7_PROJECT0
#define WEEK7_PROJECT0

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif