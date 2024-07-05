#include "main.h"

/**
 * factorial - factorial
 * @n: number to factorial
 *
 * Return: result of n!, -1 if negative
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
