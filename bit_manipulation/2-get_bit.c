#include "main.h"

/**
 * get_bit - get bit at index of a number
 * @n: decimal number
 * @index: index starting from the right
 *
 * Return: bit if number at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63) /* (number of bits of ULONG_MAX) - 1 */
		return (-1);
	return ((n >> index) & 1);
}
