#include "main.h"

/**
 * _pow_recursion - power
 * @x: number to power up
 * @y: power
 *
 * Return: result of x power y, -1 if negative
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
