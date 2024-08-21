#include "main.h"
#include <string.h>

/**
 * binary_to_uint - convert bin to dec
 * @b: binary number string
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int binlen = strlen(b);
	int i;
	int dec = 0;
	int bit = 1;

	if (b != NULL)
	{
		for (i = binlen; i > 0; i++)
		{
			if ((b[i] != '0') && (b[i] != '1'))
				return (0);
			dec += b[i] * bit;
			bit *= 2;
			dec *= 10;
		}
		return (dec);
	}
	return (0);
}
