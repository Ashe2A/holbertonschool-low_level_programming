#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer pointer
 * @b: second integer pointer
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
