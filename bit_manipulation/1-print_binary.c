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
	
	while (bit * 2 <= dec)
		bit *= 2;

	while ((dec > 0) || (bit > 0))
	{
		if (dec >= bit)
		{
			dec -= bit;
			printf("1");
		}
		else
			printf("0");
		bit = bit >> 1;
	}
}
