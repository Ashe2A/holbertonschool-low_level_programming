#include "main.h"

/**
 * swap_int - swap numbers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
