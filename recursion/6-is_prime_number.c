#include "main.h"

/**
 * is_prime_number - check prime number
 * @n: number to check
 *
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_sqrt(n, 2));
	}
}

/**
 * find_prime - finds if prime
 * @n: number to check
 * @x: moving divider
 *
 * Return: 1 if prime number, 0 if not
 */
int find_prime(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, x + 1));
	}
}
