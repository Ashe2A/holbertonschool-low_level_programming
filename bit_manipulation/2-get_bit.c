#include "main.h"
#include <limits.h>

/**
 * get_bit - get bit at index of a number
 * @n: decimal number
 * @index: index starting from the right
 *
 * Return: bit if number at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ulm = ULONG_MAX;
	unsigned int i = 0;

	while (ulm > 0)
	{
		ulm >>= 1;
		i++;
	}

	if (index > i) /* (number of bits of ULONG_MAX) - 1 */
		return (-1);
	return ((n >> index) & 1);
}
