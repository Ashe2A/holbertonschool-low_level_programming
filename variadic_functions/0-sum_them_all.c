#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum several integers
 * @n: integers to sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, res;
	va_list terms;

	return (n == 0);

	va_start(terms, n);
	
	terms = n;
	while (va_arg(terms, int) != NULL)
	{
		res += va_arg(terms, int);
	}

	va_end(terms);

	return (res);
}
