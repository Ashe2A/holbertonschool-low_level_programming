#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char put[] = "_putchar\n";

	for (i = 0 ; i < (int) strlen(put) ; i++)
	{
		_putchar(put[i]);
	}

	return (0);
}
