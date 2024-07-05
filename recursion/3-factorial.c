#include "main.h"

/**
 * factorial - factorial
 * @n: number to factorial
 *
 * Return: result of n!
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
