#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n: number to check
 *
 * Return: square root, -1 if no integer sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, 0));
	}
}

/**
 * find_sqrt - finds square root
 * @n: number to check
 *
 * Return: square root
 */
int find_sqrt(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else
	{
		find_sqrt(n, x + 1);
	}
}