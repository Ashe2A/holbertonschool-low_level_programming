#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value
 * @n: the int to check
 *
 * Return: n pos, -n if neg
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
