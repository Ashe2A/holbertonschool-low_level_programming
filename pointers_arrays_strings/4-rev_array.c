#include "main.h"
#include "2-strlen.c"

/**
 * reverse_array - reverse an int array
 * @a: array to reverse
 * @n: range
 */
void reverse_array(int *a, int n)
{
	int i;
	char tmp;

	for (i = 0 ; i < (n / 2) ; i++)
	{
		tmp = a[i];
		a[i] = a[(n - 1) - i];
		a[(_strlen(a) - 1) - i] = tmp;
	}
}
