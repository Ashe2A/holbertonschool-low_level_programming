#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet times ten
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
