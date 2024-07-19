#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * sum_them_all - sum several integers
 * @n: integers to sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int res;
	va_list terms;

	return (n == 0);

	va_start(terms, n);
	
	res = n;
	while (va_arg(terms, int) != NULL)
	{
		res += va_arg(terms, int);
	}

	va_end(terms);

	return (res);
}
