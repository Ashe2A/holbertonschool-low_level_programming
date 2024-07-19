#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - print several integers
 * @separator: character to separate the integers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list array;

	if (separator == NULL)
	{
		separator = "";
	}

	if (n != 0)
	{

		va_start(array, n);

		for (i = 0; i < (n - 1); i++)
		{
			printf("%d%s", va_arg(array, int), separator);
		}
		printf("%d", va_arg(array, int));

		va_end(array);
	}

    printf("\n");
}
