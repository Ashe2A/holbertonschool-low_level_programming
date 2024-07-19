#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum several integers
 * @n: number of terms
 *
 * Return: sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res;
	va_list terms;

	if (n == 0)
	{
		return (0);
	}

	va_start(terms, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(terms, int);
	}

	va_end(terms);

	return (res);
}
