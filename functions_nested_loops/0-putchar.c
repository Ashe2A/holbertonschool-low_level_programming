#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char put[] = "_putchar\n";

	for (i = 0 ; put[i] != '\0' ; i++)
	{
		_putchar(put[i]);
	}

	return (0);
}
