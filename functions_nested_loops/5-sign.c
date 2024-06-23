#include <stdlib.h>
#include <stdio.h>

/**
 * print_sign - sign of intr
 * @n: the int to check
 *
 * Return: 0 if zero, 1 if pos, -1 if neg
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
