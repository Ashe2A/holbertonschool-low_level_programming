#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - print all parameters
 * @format: list of types
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	int ignore_char = 0;
	char *new_str;
	int j;
	va_list params;

	va_start(params, format);
	while (format[i] != '\0')
	{
		if ((format[i] == 'c') || (ignore_char == 0))
		{
			_putchar(va_start(params, char));
			ignore_char = 1;
		}
		else if (format[i] == 'i')
			printf("%d", va_start(params, int));
		else if (format[i] == 'f')
			printf("%f", va_start(params, float));
		else if (format[i] == 's')
		{
			new_str = va_start(params, char *);
			if (new_str != NULL)
				printf("%s", new_str);
			else
				printf("%s", "(nil)");
		}

		j = i;
		while ((format[j + 1] != '\0') || (j == i))
		{
			printf(", ");
			i++;
		}	
	}
	printf("\n");
	va_end(params);
}
