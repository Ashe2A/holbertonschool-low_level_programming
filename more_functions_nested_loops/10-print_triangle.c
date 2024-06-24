#include "main.h"

/**
 * print_triangle - triangle
 * @size: size of triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0 ; i <= size ; i++)
	{
		for (j = 1 ; j < size - i ; j++)
		{
			_putchar(' ');
		}

		for (k = 0 ; k < i ; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
