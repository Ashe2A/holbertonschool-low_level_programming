#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * print_diagsums - adds up matrix diagonals
 * @a: matrix
 * @size: size of the matrix	
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0 ; i < size; i++)
	{
		diag1 += a[i];
		diag2 += a[(size - 1) - i];
		a++;
	}

	printf("%d, ", diag1);
	printf("%d\n", diag2);
}