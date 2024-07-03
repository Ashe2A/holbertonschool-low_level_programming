#include "main.h"

/**
 * reverse_array - reverse an int array
 * @a: array to reverse
 * @n: range
 */
void reverse_array(int *a, int n)
{
	int i, max;
	char tmp;

	if (n > _strlen(a))
	{
		max = _strlen(a);
	}
	else
	{
		max = n;
	}

	for (i = 0 ; i < (max / 2) ; i++)
	{
		tmp = a[i];
		a[i] = a[(max - 1) - i];
		a[(max - 1) - i] = tmp;
	}
}
