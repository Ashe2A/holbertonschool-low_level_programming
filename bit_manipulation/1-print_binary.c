#include "main.h"
#include <stdio.h>

/**
 * print_binary - convert dec to bin
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int dec = n;
	unsigned long int bit = 1;
	
	while (bin * 2 < dec)
		bit *= 2;

	while ((dec > 0) && (bit > 0))
	{
		if (dec >= bit)
		{
			dec -= bit;
			putchar('1');
		}
		else
			putchar('0');
		bit = bit >> 1;
	}
}
