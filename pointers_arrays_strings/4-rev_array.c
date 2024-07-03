#include "main.h"

/**
 * reverse_array - reverse an int array
 * @a: array to reverse
 * @n: range
 */
void reverse_array(int *a, int n)
{
	int i, half;
	char tmp;

	if (n % 2 == 0)
	{
		half = (n * sizeof(int)) / 2;
	}
	else
	{
		half = (n * sizeof(int)) / 2;
	}

	for (i = 0 ; (i < half) && (a[i] != '\0') ; i++)
	{
		tmp = a[i];
		a[i] = a[((n * sizeof(int)) - 1) - i];
		a[((n * sizeof(int)) - 1) - i] = tmp;
	}
}
