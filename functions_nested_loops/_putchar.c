#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _putchar - print putchar
 *
 * Return: Always 0 (Success)
 */

int _putchar(void)
{
	int i;
	char p[] = "_putchar\n";

	for (i = 0 ; i <= strlen(p) ; i++)
	{
		putchar(p[i]);
	}

	return(0);
}
