#include "main.h"

/**
 * print_binary - convert dec to bin
 * @n: decimal number$
 * @index: index starting from the right
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int remains = n >> index;

	if ((n == 0) && (index == 0))
		return (0);
	if (remains == 0)
		return (-1);
	return (remains & 1);
}
